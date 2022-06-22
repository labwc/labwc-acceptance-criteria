#define _POSIX_C_SOURCE 200809L
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static bool print_incomplete_cat_a;
static bool print_cat_a;
static bool print_cat_b;

static void
print_stats(void)
{
	int nr_cat_a_items = 0;
	int nr_complete_cat_a_items = 0;
	char *line = NULL;
	size_t len = 0;
	while ((getline(&line, &len, stdin) != -1)) {
		char *p = strrchr(line, '\n');
		if (p) {
			*p = '\0';
		}
		if (strncmp(line, "|  ", 3))
			return;
		if (!strncmp(line, "|  A", 4)) {
			++nr_cat_a_items;
			if (strstr(line, "complete")) {
				++nr_complete_cat_a_items;
			}
		}
	}
	free(line);
	printf("Cat A total number: %d\n", nr_cat_a_items);
	printf("Cat A complete:     %d\n", nr_complete_cat_a_items);
}

void
process_line(char *line)
{
	if (strncmp(line, "|  ", 3)) {
		return;
	}
	if (print_incomplete_cat_a && !strncmp(line, "|  A", 4) && !strstr(line, "complete"))
		printf("%s\n", line);
	if (print_cat_a && !strncmp(line, "|  A", 4))
		printf("%s\n", line);
	if (print_cat_b && !strncmp(line, "|  B", 4))
		printf("%s\n", line);
}

int
main(int argc, char *argv[])
{
	if (argc != 2) {
		fprintf(stderr, "Usage: %s < input\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	for (int i = 1; i < argc ; ++i) {
		if (!strcmp(argv[i], "--stats")) {
			print_stats();
			exit(0);
		} else if (!strcmp(argv[i], "--print-header")) {
			printf("| Cat | Status   | Reference | Category                        | Description                                             | Comment\n");
			printf("| --- | -------- | --------- | ------------------------------- | ------------------------------------------------------- | -------\n");
			exit(0);
		} else if (!strcmp(argv[i], "--incomplete-a")) {
			print_incomplete_cat_a = true;
		} else if (!strcmp(argv[i], "--cata")) {
			print_cat_a = true;
		} else if (!strcmp(argv[i], "--catb")) {
			print_cat_b = true;
		}
	}

	char *line = NULL;
	size_t len = 0;
	while ((getline(&line, &len, stdin) != -1)) {
		char *p = strrchr(line, '\n');
		if (p) {
			*p = '\0';
		}
		process_line(line);
	}
	free(line);
}
