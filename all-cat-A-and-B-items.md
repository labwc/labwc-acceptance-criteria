This file has been auto-generated based on README.md. Do not edit it manually

| Cat | Status   | Reference | Category                        | Description                                             | Comment
| --- | -------- | --------- | ------------------------------- | ------------------------------------------------------- | -------
|  A  | complete | 1.1.1     | general                         | Optionally support Xwayland                             |
|  A  | complete | 1.1.2     | general                         | Parse `<config-dir>/rc.xml`                             |
|  A  | complete | 1.1.3     | general                         | Parse `<config-dir>/environment`                        |
|  A  | complete | 1.1.4     | general                         | Parse `<config-dir>/autostart`                          |
|  A  | complete | 1.1.5     | general                         | Parse `<config-dir>/menu.xml`                           |
|  A  | complete | 1.1.6     | general                         | Parse openbox themes files and associated xbm icons     |
|  A  | complete | 1.1.7     | general                         | Catch SIGHUP to re-load config file and theme           |
|  A  | complete | 1.1.8     | general                         | Support both CSD and SSD                                |
|  A  | complete | 1.1.9     | general                         | Support maximize, iconify, close buttons                |
|  A  | complete | 1.1.10    | general                         | Support damage tracking to reduce CPU usage             |
|  A  | complete | 1.1.11    | general                         | Support HiDPI                                           |
|  A  | complete | 1.1.12    | general                         | Support on-screen display (osd)                         |
|  A  | complete | 1.1.13    | general                         | Support libinput configuration                          |
|  A  | complete | 1.1.14    | general                         | Support drag-n-drop                                     |
|  A  | complete | 1.1.15    | general                         | Support input method editors (IME)                      |
|  A  | complete | 1.2.3     | wayland-protocol                | [xdg-shell-v3]                                          |
|  A  | complete | 1.3.3     | wlr-protocol                    | wlr-foreign-toplevel-management-unstable-v1             |
|  A  | complete | 1.3.6     | wlr-protocol                    | wlr-layer-shell-unstable-v1                             |
|  A  | complete | 1.3.7     | wlr-protocol                    | wlr-output-management-unstable-v1                       |
|  A  | complete | 2.1.2     | resistance                      | `screenEdgeStrength`                                    | DEVIATION Can be negative
|  A  | complete | 2.4.1     | theme                           | `name`                                                  |
|  A  | complete | 2.4.6     | theme                           | `<font place="ActiveWindow">`                           |
|  A  | complete | 2.8.3     | keyboard                        | `keybind`                                               | See section 3.1
|  A  | complete | 2.9.2     | mouse                           | `doubleClickTime`                                       |
|  A  | complete | 2.9.3     | mouse                           | `context`                                               |
|  A  | complete | 3.1.1     | keyboard keybind                | `key`                                                   |
|  A  | complete | 3.1.2     | keyboard keybind                | `action.name`                                           |
|  A  | complete | 3.1.3     | keyboard keybind                | `action.menu`                                           |
|  A  | complete | 3.1.4     | keyboard keybind                | Support modifier keys                                   |
|  A  | complete | 3.2.1     | mouse binding                   | `context.name`                                          |
|  A  | complete | 3.2.2     | mouse binding                   | `mousebind.button`                                      |
|  A  | complete | 3.2.3     | mouse binding                   | `mousebind.action`                                      |
|  A  | complete | 3.3.5     | mouse context                   | `Titlebar`                                              |
|  A  | complete | 3.3.15    | mouse context                   | `Iconfiy`                                               |
|  A  | complete | 3.3.16    | mouse context                   | `Maximize`                                              |
|  A  | complete | 3.3.17    | mouse context                   | `Close`                                                 |
|  A  | complete | 3.4.1     | mouse button                    | `Left`                                                  |
|  A  | complete | 3.4.1     | mouse button                    | `Right`                                                 |
|  A  | complete | 3.5.1     | mouse event                     | `Press`                                                 |
|  A  | complete | 3.5.2     | mouse event                     | `Click`                                                 |
|  A  | complete | 3.5.3     | mouse event                     | `DoubleClick`                                           |
|  A  | complete | 4.1       | global action                   | `Execute`                                               |
|  A  | complete | 4.2.1     | global action                   | `ShowMenu`                                              |
|  A  | complete | 4.3       | global action                   | `NextWindow`                                            |
|  A  | complete | 4.12      | global action                   | `Reconfigure`                                           |
|  A  | complete | 4.14      | global action                   | `Exit`                                                  |
|  A  | complete | 5.1       | window action                   | `Focus`                                                 |
|  A  | complete | 5.2       | window action                   | `Raise`                                                 |
|  A  | complete | 5.7       | window action                   | `Iconify`                                               |
|  A  | complete | 5.8       | window action                   | `Close`                                                 |
|  A  | complete | 5.13      | window action                   | `ToggleMaximize`                                        |
|  A  | complete | 5.21      | window action                   | `Move`                                                  |
|  A  | complete | 5.22      | window action                   | `Resize`                                                |
|  A  | complete | 6.1.1     | geometry                        | `border.width`                                          |
|  A  | complete | 6.1.3     | geometry                        | `menu.separator.width`                                  |
|  A  | complete | 6.1.6     | geometry                        | `osd.border.width`                                      |
|  A  | complete | 6.2.1     | border colors                   | `window.active.border.color`                            |
|  A  | complete | 6.2.3     | border colors                   | `window.inactive.border.color`                          |
|  A  | complete | 6.2.5     | border colors                   | `border.color`                                          |
|  A  | complete | 6.2.9     | border colors                   | `osd.border.color`                                      |
|  A  | complete | 6.3.1     | titlebar colors                 | `window.active.label.text.color`                        |
|  A  | complete | 6.3.2     | titlebar colors                 | `window.inactive.label.text.color`                      |
|  A  | complete | 6.3.3     | titlebar colors                 | `window.active.button.unpressed.image.color`            |
|  A  | complete | 6.3.11    | titlebar colors                 | `window.inactive.button.unpressed.image.color`          |
|  A  | complete | 6.4.1     | active window textures          | `window.active.title.bg`                                |
|  A  | complete | 6.8.2     | menu colors                     | `menu.items.text.color`                                 |
|  A  | complete | 6.8.4     | menu colors                     | `menu.items.active.text.color`                          |
|  A  | complete | 6.8.6     | menu colors                     | `menu.separator.color`                                  |
|  A  | complete | 6.9.1     | menu textures                   | `menu.items.bg`                                         |
|  A  | complete | 6.9.2     | menu textures                   | `menu.items.active.bg`                                  |
|  A  | complete | 6.10.1    | osd textures                    | `osd.bg`                                                | we only set the color
|  A  | complete | 6.11.1    | osd colors                      | `osd.label.text.color`                                  |
|  A  | complete | 6.15.1.1  | theme button base               | `max.xbm`                                               |
|  A  | complete | 6.15.1.3  | theme button base               | `iconify.xbm`                                           |
|  A  | complete | 6.15.1.4  | theme button base               | `close.xbm`                                             |
|  A  | complete | 7.1.1     | menu syntax general             | `id`                                                    |
|  A  | complete | 7.2.1     | menu syntax item                | `label`                                                 |
|  A  | complete | 7.2.3     | menu syntax item                | `action`                                                |
|  A  | complete | 7.3.1     | menu syntax separator           | `<separator/>`                                          | For separator line only
|  A  | complete | 8.1.1     | extra                           | Support rounded top window corners                      | rc.xml `<theme><cornerRadius>`
|  B  | complete | 1.1.16    | general                         | Support `--session` option                              |
|  B  | complete | 1.2.1     | wayland-protocol                | [presentation-time]                                     |
|  B  | complete | 1.2.2     | wayland-protocol                | [viewporter]                                            |
|  B  | complete | 1.2.4     | wayland-protocol                | fullscreen-shell-unstable-v1                            |
|  B  | complete | 1.2.5     | wayland-protocol                | idle-inhibit-unstable-v1                                |
|  B  |          | 1.2.6.1   | wayland-protocol                | input-method-unstable-v1                                |
|  B  | complete | 1.2.6.2   | wayland-protocol                | input-method-unstable-v2                                |
|  B  |          | 1.2.7     | wayland-protocol                | input-timestamps-unstable-v1                            |
|  B  |          | 1.2.8     | wayland-protocol                | keyboard-shortcuts-inhibit-unstable-v1                  | This is controversial [^3]
|  B  |          | 1.2.9     | wayland-protocol                | linux-dmabuf-unstable-v1                                |
|  B  |          | 1.2.10    | wayland-protocol                | linux-explicit-synchronization-unstable-v1              |
|  B  | complete | 1.2.11    | wayland-protocol                | pointer-constraints-unstable-v1                         |
|  B  |          | 1.2.12    | wayland-protocol                | pointer-gestures-unstable-v1                            |
|  B  | complete | 1.2.13    | wayland-protocol                | primary-selection-unstable-v1                           |
|  B  | complete | 1.2.14    | wayland-protocol                | relative-pointer-unstable-v1                            |
|  B  | complete | 1.2.15    | wayland-protocol                | tablet-v2-manager                                       |
|  B  | complete | 1.2.16    | wayland-protocol                | text-input-unstable-v3                                  |
|  B  | complete | 1.2.17    | wayland-protocol                | xdg-decoration-unstable-v1                              |
|  B  | complete | 1.2.18.1  | wayland-protocol                | xdg-foreign-v1                                          |
|  B  | complete | 1.2.18.2  | wayland-protocol                | xdg-foreign-v2                                          |
|  B  | complete | 1.2.19    | wayland-protocol                | xdg-output-unstable-v1                                  |
|  B  |          | 1.2.20    | wayland-protocol                | xwayland-keyboard-grab-unstable-v1                      |
|  B  | complete | 1.2.21    | wayland-protocol                | drm-lease-v1                                            |
|  B  | complete | 1.2.22    | wayland-protocol                | [ext-session-lock-v1]                                   | This is more secure [^1]
|  B  | complete | 1.2.23    | wayland-protocol                | xdg-activation-v1                                       |
|  B  | complete | 1.2.24    | wayland-protocol                | single-pixel-buffer-v1                                  |
|  B  | complete | 1.2.25    | wayland-protocol                | cursor-shape-v1                                         |
|  B  | complete | 1.2.26    | wayland-protocol                | fractional-scale-v1                                     |
|  B  | complete | 1.2.27    | wayland-protocol                | tearing-control-manager-v1                              |
|  B  |          | 1.2.28    | wayland-protocol                | content-type-v1                                         |
|  B  | complete | 1.2.29    | wayland-protocol                | xwayland-shell-v1                                       |
|  B  | complete | 1.2.30    | wayland-protocol                | security-context-v1                                     | Note: initial support only
|  B  | complete | 1.2.31    | wayland-protocol                | cosmic-workspace                                        |
|  B  | complete | 1.2.32    | wayland-protocol                | ext-workspace                                           |
|  B  | complete | 1.2.33    | wayland-protocol                | ext-foreign-toplevel-list                               |
|  B  | complete | 1.3.1     | wlr-protocol                    | wlr-data-control-unstable-v1                            |
|  B  | complete | 1.3.2     | wlr-protocol                    | wlr-export-dmabuf-unstable-v1                           |
|  B  | complete | 1.3.4     | wlr-protocol                    | wlr-gamma-control-unstable-v1                           |
|  B  | complete | 1.3.5     | wlr-protocol                    | wlr-input-inhibitor-unstable-v1                         |
|  B  | complete | 1.3.8     | wlr-protocol                    | wlr-output-power-management-unstable-v1                 |
|  B  | complete | 1.3.9     | wlr-protocol                    | wlr-screencopy-unstable-v1                              |
|  B  | complete | 1.3.10    | wlr-protocol                    | wlr-virtual-pointer-unstable-v1                         |
|  B  | complete | 1.3.11    | wlr-protocol                    | [kde-server-decoration]                                 | xdg-decoration is preferable, but we support this until GTK move across
|  B  |          | 2.1.1     | resistance                      | `strength`                                              | If we implement, consider a better name
|  B  | complete | 2.1.3     | resistance                      | `windowEdgeStrength`                                    | EXTRA
|  B  | complete | 2.1.4     | resistance                      | `unSnapThreshold`                                       | EXTRA
|  B  | complete | 2.1.5     | resistance                      | `unMaximizeThreshold`                                   | EXTRA
|  B  | complete | 2.2.3     | focus                           | `followMouse`                                           |
|  B  | complete | 2.2.5     | focus                           | `followMouseRequiresMovement`                           | DEVIATION It is called `underMouse` in Openbox
|  B  | complete | 2.2.6     | focus                           | `raiseOnFocus`                                          |
|  B  | complete | 2.3.1     | placement                       | `policy`                                                |
|  B  | complete | 2.3.1.1   | placement                       | `<policy>automatic</policy>`                            | DEVIATION: similar to Openbox's `Smart`
|  B  | complete | 2.3.1.2   | placement                       | `<policy>cursor</policy>`                               | DEVIATION: like Openbox's `UnderMouse`
|  B  | complete | 2.3.1.3   | placement                       | `<policy>center</policy>`                               | EXTRA
|  B  | complete | 2.3.1.4   | placement                       | `<policy>cascade</policy>`                              | EXTRA
|  B+ | complete | 2.4.2.1   | theme                           | `<titlebar><layout>`                                    | DEVIATION: Replaces `titleLayout` in Openbox
|  B+ | complete | 2.4.2.2   | theme                           | `<titlebar><showTitle>`                                 | DEVIATION: Replaces `titleLayout` in Openbox
|  B  | complete | 2.4.4     | theme                           | `keepBorder`                                            | DEVIATION: gives ToggleDeocration 3 states
|  B  | complete | 2.4.7     | theme                           | `<font place="InactiveWindow">`                         |
|  B  | complete | 2.4.8     | theme                           | `<font place="MenuHeader">`                             |
|  B  | complete | 2.4.9     | theme                           | `<font place="MenuItem">`                               |
|  B  | complete | 2.4.10    | theme                           | `<font place="OnScreenDisplay">`                        |
|  B  | complete | 2.4.11    | theme                           | `font.name`                                             |
|  B  | complete | 2.4.12    | theme                           | `font.size`                                             |
|  B  | complete | 2.4.13    | theme                           | `font.weight`                                           |
|  B  | complete | 2.4.14    | theme                           | `font.slant`                                            |
|  B  | complete | 2.4.14.1  | theme                           | `font.slant: normal`                                    |
|  B  | complete | 2.4.14.2  | theme                           | `font.slant: italic`                                    |
|  B  | complete | 2.4.14.3  | theme                           | `font.slant: oblique`                                   | EXTRA
|  B  | complete | 2.4.15    | theme                           | `dropShadows`                                           | EXTRA
|  B  | complete | 2.4.16    | theme                           | `icon`                                                  | EXTRA
|  B  | complete | 2.4.17    | theme                           | `fallbackAppIcon`                                       | EXTRA
|  B  | complete | 2.5.1     | desktop                         | `number`                                                |
|  B  | complete | 2.5.3     | desktop                         | `popupTime`                                             |
|  B  | complete | 2.5.4     | desktop                         | `names`                                                 |
|  B  | complete | 2.5.5     | desktop                         | `prefix`                                                | EXTRA
|  B  | complete | 2.6.1     | resize                          | drawContents                                            |
|  B  | complete | 2.6.2     | resize                          | popupShow                                               |
|  B  |          | 2.6.3     | resize                          | popupPosition                                           |
|  B  |          | 2.6.4     | resize                          | popupFixedposition                                      |
|  B  |          | 2.6.5     | resize                          | cornerRange                                             | EXTRA
|  B  |          | 2.6.6     | resize                          | minimumArea                                             | EXTRA
|  B  | complete | 2.7.1     | window rules                    | `windowRule`                                            | EXTRA
|  B  | complete | 2.7.2.1   | window rule criteria            | `windowRule.identifier`                                 | EXTRA
|  B  | complete | 2.7.2.2   | window rule criteria            | `windowRule.title`                                      | EXTRA
|  B  | complete | 2.7.2.3   | window rule criteria            | `windowRule.matchOnce`                                  | EXTRA
|  B  | complete | 2.7.3.1   | window rule property            | `windowRule.serverDecoration`                           | EXTRA
|  B  | complete | 2.7.3.2   | window rule property            | `windowRule.skipTaskbar`                                | EXTRA
|  B  | complete | 2.7.3.3   | window rule property            | `windowRule.skipWindowSwitcher`                         | EXTRA
|  B  | complete | 2.7.3.4   | window rule property            | `windowRule.ignoreFocusRequest`                         | EXTRA
|  B  | complete | 2.7.3.5   | window rule property            | `windowRule.fixedPosition`                              | EXTRA
|  B  | complete | 2.7.3.6   | window rule property            | `windowRule.ignoreConfigureRequest`                     | EXTRA
|  B  | complete | 2.7.3.7   | window rule property            | `windowRule.wantAbsorbedModifierReleaseEvents`          | EXTRA
|  B  | complete | 2.7.4     | window rule type                | `windowRule.type`                                       | EXTRA
|  B  | complete | 2.7.5.1   | window rule condition           | `windowRule.type`                                       | EXTRA
|  B  | complete | 2.8.4     | keyboard                        | `numlock`                                               | EXTRA
|  B  | complete | 2.8.5     | keyboard                        | `layoutScope`                                           | EXTRA
|  B  | complete | 2.9.4     | mouse                           | `scrollFactor`                                          | EXTRA
|  B  | complete | 2.9a.1    | touch                           | `deviceName`                                            | EXTRA
|  B  | complete | 2.9a.2    | touch                           | `mapToOutput`                                           | EXTRA
|  B  | complete | 2.9b.1    | tablet                          | `mapToOutput`                                           | EXTRA
|  B  | complete | 2.9b.2    | tablet                          | `rotate`                                                | EXTRA
|  B  | complete | 2.9b.3    | tablet                          | `area`                                                  | EXTRA
|  B  | complete | 2.9b.4    | tablet                          | `map`                                                   | EXTRA
|  B  | complete | 2.9c.1    | tablet tool                     | `tabletTool`                                            | EXTRA
|  B  | complete | 2.10.1    | margins                         | `<margin>`                                              |
|  B  | complete | 2.11.1    | menu                            | `ignoreButtonReleasePeriod`                             | DEVIATION: called `hideDelay` in openbox
|  B+ |          | 2.11.3    | menu                            | `submenuShowDelay`                                      |
|  B  | complete | 2.11.4    | menu                            | `showIcons`                                             | DEVIATION: called `applicationIcons` in Openbox
|  B  |          | 2.11.6    | menu                            | `file`                                                  | TODO: is this supported already?
|  B  | complete | 2.13.1    | core                            | `decoration`                                            | EXTRA
|  B  | complete | 2.13.2    | core                            | `gap`                                                   | EXTRA
|  B  | complete | 2.13.3    | core                            | `adaptiveSync`                                          | EXTRA
|  B  | complete | 2.13.4    | core                            | `reuseOutputMode`                                       | EXTRA
|  B  | complete | 2.13.5    | core                            | `xwaylandPersistence`                                   | EXTRA
|  B  | complete | 2.13.6    | core                            | `allowTearing`                                          | EXTRA
|  B  | complete | 2.13.7    | core                            | `autoEnableOutputs`                                     | EXTRA
|  B  | complete | 2.14.1    | window switcher                 | `show`                                                  | EXTRA
|  B  | complete | 2.14.2    | window switcher                 | `preview`                                               | EXTRA
|  B  | complete | 2.14.3    | window switcher                 | `outlines`                                              | EXTRA
|  B  | complete | 2.14.4.1  | window switcher                 | `fields.field.content`                                  | EXTRA
|  B  | complete | 2.14.4.2  | window switcher                 | `fields.field.width`                                    | EXTRA
|  B  | complete | 2.14.5    | window switcher                 | `allWorkspaces`                                         | EXTRA
|  B  | complete | 3.6.1     | libinput                        | naturalScroll                                           | EXTRA
|  B  | complete | 3.6.2     | libinput                        | leftHanded                                              | EXTRA
|  B  | complete | 3.6.3     | libinput                        | pointerSpeed                                            | EXTRA
|  B  | complete | 3.6.4     | libinput                        | accelProfile                                            | EXTRA
|  B  | complete | 3.6.5     | libinput                        | tap                                                     | EXTRA
|  B  | complete | 3.6.6     | libinput                        | tapButtonMap                                            | EXTRA
|  B  | complete | 3.6.7     | libinput                        | tapAndDrag                                              | EXTRA
|  B  | complete | 3.6.8     | libinput                        | dragLock                                                | EXTRA
|  B  | complete | 3.6.9     | libinput                        | middleEmulation                                         | EXTRA
|  B  | complete | 3.6.10    | libinput                        | disableWhiteTyping                                      | EXTRA
|  B  | complete | 3.6.11    | libinput                        | clickMethod                                             | EXTRA
|  B  | complete | 3.6.12    | libinput                        | sendEventsMode                                          | EXTRA
|  B  | complete | 3.6.13    | libinput                        | calibrationMatrix                                       | EXTRA
|  B  | complete | 3.1.6     | keyboard binding                | `default`                                               | EXTRA
|  B  | complete | 3.1.7     | keyboard binding                | `layoutDependent`                                       | EXTRA
|  B  | complete | 3.1.8     | keyboard binding                | `onRelease`                                             | EXTRA
|  B  | complete | 3.1.9     | keyboard binding                | `allowWhenLocked`                                       | EXTRA
|  B  | complete | 3.2.4     | mouse binding                   | `default`                                               | EXTRA
|  B  | complete | 3.3.1     | mouse context                   | `Frame`                                                 |
|  B  | complete | 3.3.2     | mouse context                   | `Client`                                                |
|  B  | complete | 3.3.3     | mouse context                   | `Desktop`                                               |
|  B  | complete | 3.3.4     | mouse context                   | `Root`                                                  | DEVIATION [^2]
|  B  | complete | 3.3.6     | mouse context                   | `Top`                                                   |
|  B  | complete | 3.3.7     | mouse context                   | `Bottom`                                                |
|  B  | complete | 3.3.8     | mouse context                   | `Left`                                                  |
|  B  | complete | 3.3.9     | mouse context                   | `Right`                                                 |
|  B  | complete | 3.3.10    | mouse context                   | `TLCorner`                                              |
|  B  | complete | 3.3.11    | mouse context                   | `TRCorner`                                              |
|  B  | complete | 3.3.12    | mouse context                   | `BLCorner`                                              |
|  B  | complete | 3.3.13    | mouse context                   | `BRCorner`                                              |
|  B  |          | 3.3.14    | mouse context                   | `Icon`                                                  |
|  B  | complete | 3.3.21    | mouse context                   | `Title`                                                 | EXTRA
|  B  |          | 3.4.1     | mouse button                    | `Middle`                                                |
|  B  | complete | 3.4.1     | mouse button                    | `Up` (scroll)                                           |
|  B  | complete | 3.4.1     | mouse button                    | `Down` (scroll)                                         |
|  B  |          | 3.5.4     | mouse event                     | `Release`                                               |
|  B  | complete | 3.5.5     | mouse event                     | `Drag`                                                  |
|  B  | complete | 3.5.6     | mouse event                     | `Scroll`                                                | DEVIATION: Scroll is used instead of Click for mouse-buttons Up/Down
|  B  | complete | 4.2.2     | global action                   | `ShowMenu.menu`                                         |
|  B  | complete | 4.2.3     | global action                   | `ShowMenu.atCursor`                                     | EXTRA
|  B  | complete | 4.2.4     | global action                   | `ShowMenu.position`                                     |
|  B  |          | 4.5       | global action                   | `DirectionalCycleWindows`                               |
|  B  |          | 4.6       | global action                   | `DirectionalTargetWindows`                              |
|  B  | complete | 4.7       | global action                   | `GoToDesktop`                                           |
|  B  | complete | 4.7.1     | global action                   | `GoToDesktop.to`                                        |
|  B  | complete | 4.7.1.1   | global action                   | `GoToDesktop.to::last`                                  |
|  B  | complete | 4.7.1.2   | global action                   | `GoToDesktop.to::right`                                 |
|  B  | complete | 4.7.1.3   | global action                   | `GoToDesktop.to::left`                                  |
|  B  | complete | 4.7.2     | global action                   | `GoToDesktop.wrap`                                      |
|  B  |          | 4.8       | global action                   | `AddDesktop`                                            |
|  B  |          | 4.9       | global action                   | `RemoveDesktop`                                         |
|  B  |          | 4.10      | global action                   | `ToggleShowDesktop`                                     |
|  B  | complete | 4.16      | global action                   | `Debug`                                                 | EXTRA
|  B  | complete | 4.17      | global action                   | `None`                                                  | EXTRA Removes other actions within mouse bindings
|  B  | complete | 4.18      | global action                   | `Kill`                                                  | EXTRA Send SIGTERM
|  B  | complete | 4.19      | global action                   | `FocusOutput`                                           | EXTRA
|  B  | complete | 4.20      | global action                   | `ToggleKeybinds`                                        | EXTRA
|  B  | complete | 4.21      | global action                   | `VirtualOutputAdd`                                      | EXTRA
|  B  | complete | 4.22      | global action                   | `VirtualOutputRemove`                                   | EXTRA
|  B  | complete | 4.23      | global action                   | `ToggleTabletMouseEmulation`                            | EXTRA
|  B  | complete | 4.24      | global action                   | `ZoomIn`                                                | EXTRA
|  B  | complete | 4.25      | global action                   | `ZoomOut`                                               | EXTRA
|  B  | complete | 4.26      | global action                   | `EnableTabletMouseEmulation`                            | EXTRA
|  B  | complete | 4.27      | global action                   | `DisableTabletMouseEmulation`                           | EXTRA
|  B  | complete | 4.28      | global action                   | `WarpCursor`                                            | EXTRA
|  B  | complete | 5.3       | window action                   | `Lower`                                                 |
|  B  |          | 5.4       | window action                   | `RaiseLower`                                            |
|  B  | complete | 5.5       | window action                   | `Unfocus`                                               |
|  B  |          | 5.6       | window action                   | `FocusToBottom`                                         |
|  B  | complete | 5.9       | window action                   | `ToggleShade`                                           |
|  B  | complete | 5.10      | window action                   | `Shade`                                                 |
|  B  | complete | 5.11      | window action                   | `Unshade`                                               |
|  B  | complete | 5.12      | window action                   | `ToggleOmnipresent`                                     | aka sticky
|  B  |          | 5.13.1    | window action                   | `ToggleMaximize.direction`                              |
|  B  | complete | 5.14      | window action                   | `Maximize`                                              |
|  B  |          | 5.14.1    | window action                   | `Maximize.direction`                                    |
|  B  | complete | 5.15      | window action                   | `Unmaximize`                                            |
|  B  |          | 5.15.1    | window action                   | `Unmaximize.direction`                                  |
|  B  | complete | 5.16      | window action                   | `ToggleFullscreen`                                      |
|  B  | complete | 5.17.1    | window action                   | `ToggleDecorations`                                     |
|  B  | complete | 5.17.2    | window action                   | `SetDecorations`                                        | EXTRA
|  B  |          | 5.18      | window action                   | `Decorate`                                              |
|  B  |          | 5.19      | window action                   | `Undecorate`                                            |
|  B  | complete | 5.20      | window action                   | `SendToDesktop`                                         |
|  B  | complete | 5.20.1    | window action                   | `SendToDesktop.to`                                      | EXTRA: support value 'current'
|  B  | complete | 5.20.2    | window action                   | `SendToDesktop.follow`                                  |
|  B  | complete | 5.20.3    | window action                   | `SendToDesktop.wrap`                                    |
|  B  | complete | 5.23.1    | window action                   | `MoveTo`                                                | DEVIATION: `MoveResizeTo` in Openbox
|  B  | complete | 5.23.2    | window action                   | `ResizeTo`                                              |
|  B  | complete | 5.24      | window action                   | `MoveRelative`                                          |
|  B  | complete | 5.25      | window action                   | `ResizeRelative`                                        |
|  B  | complete | 5.26      | window action                   | `MoveToEdge`                                            |
|  B  | complete | 5.26.1    | window action                   | `MoveToEdge.snapWindows`                                | EXTRA
|  B  | complete | 5.27      | window action                   | `GrowToEdge`                                            |
|  B  |          | 5.28      | window action                   | `GrowToFill`                                            |
|  B  | complete | 5.29      | window action                   | `ShrinkToEdge`                                          |
|  B  | complete | 5.30      | window action                   | `If`                                                    |
|  B  | complete | 5.31.1    | window action                   | `ForEach`                                               |
|  B  | complete | 5.31.2    | window action                   | `ForEach.none`                                          | EXTRA
|  B  | complete | 5.33      | window action                   | `ToggleAlwaysOnTop`                                     |
|  B  | complete | 5.34      | window action                   | `ToggleAlwaysOnBottom`                                  |
|  B  | complete | 5.36      | window action                   | `SnapToEdge`                                            | EXTRA
|  B  | complete | 5.37      | window action                   | `SnapToRegion`                                          | EXTRA
|  B  | complete | 5.38      | window action                   | `MoveToCursor`                                          | EXTRA
|  B  | complete | 5.39      | window action                   | `MoveToOutput`                                          | EXTRA
|  B  | complete | 5.40      | window action                   | `AutoPlace`                                             | EXTRA
|  B  | complete | 5.41      | window action                   | `ToggleSnapToEdge`                                      | EXTRA
|  B  | complete | 5.42      | window action                   | `ToggleSnapToRegion`                                    | EXTRA
|  B  | complete | 5.43      | window action                   | `UnSnap`                                                | EXTRA
|  B  | complete | 6.1.2     | geometry                        | `menu.border.width`                                     |
|  B  | complete | 6.1.4     | geometry                        | `menu.separator.padding.width`                          |
|  B  | complete | 6.1.5     | geometry                        | `menu.separator.padding.height`                         |
|  B  |          | 6.1.10    | geometry                        | `padding.width`                                         |
|  B  | complete | 6.1.11    | geometry                        | `padding.height`                                        |
|  B  | complete | 6.1.11.1  | geometry                        | `titlebar.height`                                       | EXTRA
|  B  | complete | 6.1.12    | geometry                        | `menu.overlap.x`                                        |
|  B  | complete | 6.1.13    | geometry                        | `menu.overlap.y`                                        |
|  B  |          | 6.1.14    | geometry                        | `menu.overlap`                                          |
|  B  | complete | 6.1.15    | geometry                        | `menu.width.min`                                        | EXTRA
|  B  | complete | 6.1.16    | geometry                        | `menu.width.max`                                        | EXTRA
|  B  | complete | 6.1.17    | geometry                        | `menu.items.padding.x`                                  | EXTRA
|  B  | complete | 6.1.18    | geometry                        | `menu.items.padding.y`                                  | EXTRA
|  B  | complete | 6.1.19.1  | geometry                        | `osd.window-switcher.width`                             | EXTRA
|  B  | complete | 6.1.19.2  | geometry                        | `osd.window-switcher.item.padding.x`                    | EXTRA
|  B  | complete | 6.1.19.3  | geometry                        | `osd.window-switcher.item.padding.y`                    | EXTRA
|  B  | complete | 6.1.19.4  | geometry                        | `osd.window-switcher.padding`                           | EXTRA
|  B  | complete | 6.1.19.5  | geometry                        | `osd.window-switcher.item.active.border.width`          | EXTRA
|  B  | complete | 6.1.20.1  | geometry                        | `osd.workspace-switcher.boxes.width`                    | EXTRA
|  B  | complete | 6.1.20.2  | geometry                        | `osd.workspace-switcher.boxes.height`                   | EXTRA
|  B  | complete | 6.1.21.1  | geometry                        | `window.button.width`                                   | EXTRA
|  B  | complete | 6.1.21.2  | geometry                        | `window.button.height`                                  | EXTRA
|  B  | complete | 6.1.21.3  | geometry                        | `window.button.spacing`                                 | EXTRA
|  B  | complete | 6.1.21.3  | geometry                        | `window.button.hover.bg.corner-radius`                  | EXTRA
|  B  | complete | 6.1.22.1  | geometry                        | `window.titlebar.padding.width`                         | EXTRA
|  B  | complete | 6.1.22.2  | geometry                        | `window.titlebar.padding.height`                        | EXTRA
|  B  |          | 6.2.2     | border colors                   | `window.active.title.separator.color`                   |
|  B  |          | 6.2.4     | border colors                   | `window.inactive.title.separator.color`                 |
|  B  |          | 6.2.6     | border colors                   | `window.active.client.color`                            |
|  B  |          | 6.2.7     | border colors                   | `window.inactive.client.color`                          |
|  B  | complete | 6.2.8     | border colors                   | `menu.border.color`                                     |
|  B  |          | 6.3.4     | titlebar colors                 | `window.active.button.pressed.image.color`              |
|  B  |          | 6.3.5     | titlebar colors                 | `window.active.button.disabled.image.color`             |
|  B  |          | 6.3.6     | titlebar colors                 | `window.active.button.hover.image.color`                |
|  B  |          | 6.3.7     | titlebar colors                 | `window.active.button.toggled.unpressed.image.color`    |
|  B  |          | 6.3.8     | titlebar colors                 | `window.active.button.toggled.pressed.image.color`      |
|  B  |          | 6.3.9     | titlebar colors                 | `window.active.button.toggled.hover.image.color`        |
|  B  |          | 6.3.10    | titlebar colors                 | `window.active.button.toggled.image.color`              |
|  B  |          | 6.3.12    | titlebar colors                 | `window.inactive.button.pressed.image.color`            |
|  B  |          | 6.3.13    | titlebar colors                 | `window.inactive.button.disabled.image.color`           |
|  B  |          | 6.3.14    | titlebar colors                 | `window.inactive.button.hover.image.color`              |
|  B  |          | 6.3.15    | titlebar colors                 | `window.inactive.button.toggled.unpressed.image.color`  |
|  B  |          | 6.3.16    | titlebar colors                 | `window.inactive.button.toggled.pressed.image.color`    |
|  B  |          | 6.3.17    | titlebar colors                 | `window.inactive.button.toggled.hover.image.color`      |
|  B  |          | 6.3.18    | titlebar colors                 | `window.inactive.button.toggled.image.color`            |
|  B  |          | 6.4.2     | active window textures          | `window.active.label.bg`                                |
|  B  |          | 6.4.4     | active window textures          | `window.active.grip.bg`                                 |
|  B  | complete | 6.4.5     | active window textures          | `window.active.shadow.size`                             | EXTRA
|  B  | complete | 6.4.6     | active window textures          | `window.active.shadow.color`                            | EXTRA
|  B  |          | 6.6.1     | active window button textures   | `window.active.button.unpressed.bg`                     |
|  B  |          | 6.6.2     | active window button textures   | `window.active.button.pressed.bg`                       |
|  B  |          | 6.6.3     | active window button textures   | `window.active.button.hover.bg`                         |
|  B  |          | 6.6.4     | active window button textures   | `window.active.button.disabled.bg`                      |
|  B  |          | 6.6.5     | active window button textures   | `window.active.button.toggled.unpressed.bg`             |
|  B  |          | 6.6.6     | active window button textures   | `window.active.button.toggled.pressed.bg`               |
|  B  |          | 6.6.7     | active window button textures   | `window.active.button.toggled.hover.bg`                 |
|  B  |          | 6.6.8     | active window button textures   | `window.active.button.toggled.bg`                       |
|  B  |          | 6.7.1     | inactive window button textures | `window.inactive.button.unpressed.bg`                   |
|  B  |          | 6.7.2     | inactive window button textures | `window.inactive.button.pressed.bg`                     |
|  B  |          | 6.7.3     | inactive window button textures | `window.inactive.button.hover.bg`                       |
|  B  |          | 6.7.4     | inactive window button textures | `window.inactive.button.disabled.bg`                    |
|  B  |          | 6.7.5     | inactive window button textures | `window.inactive.button.toggled.unpressed.bg`           |
|  B  |          | 6.7.6     | inactive window button textures | `window.inactive.button.toggled.pressed.bg`             |
|  B  |          | 6.7.7     | inactive window button textures | `window.inactive.button.toggled.hover.bg`               |
|  B  |          | 6.7.8     | inactive window button textures | `window.inactive.button.toggled.bg`                     |
|  B  | complete | 6.8.1     | menu colors                     | `menu.title.text.color`                                 |
|  B  |          | 6.8.3     | menu colors                     | `menu.items.disabled.text.color`                        |
|  B  |          | 6.8.5     | menu colors                     | `menu.items.active.disabled.text.color`                 |
|  B  | complete | 6.9.3     | menu textures                   | `menu.title.bg`                                         |
|  B  |          | 6.10.3    | osd textures                    | `osd.hilight.bg`                                        | for desktop osd only
|  B  |          | 6.10.4    | osd textures                    | `osd.unhilight.bg`                                      | for desktop osd only
|  B  |          | 6.11.2    | osd colors                      | `osd.hilight.bg.color`                                  | for desktop osd only
|  B  |          | 6.11.3    | osd colors                      | `osd.unhilight.bg.color`                                | for desktop osd only
|  B  | complete | 6.12.1    | text justification              | `window.label.text.justify`                             |
|  B  | complete | 6.12.2    | text justification              | `menu.title.text.justify`                               |
|  B  | complete | 6.15.1.2  | theme button base               | `max_toggled.xbm`                                       |
|  B  | complete | 6.15.1.5  | theme button base               | `desk.xbm`                                              |
|  B  | complete | 6.15.1.6  | theme button base               | `desk_toggled.xbm`                                      |
|  B  | complete | 6.15.1.7  | theme button base               | `shade.xbm`                                             |
|  B  | complete | 6.15.1.8  | theme button base               | `shade_toggled.xbm`                                     |
|  B  |          | 6.15.1.9  | theme button base               | `bullet.xbm`                                            |
|  B  | complete | 6.15.1.1  | theme button base               | `menu.xbm`                                              | EXTRA
|  B  | complete | 6.15.2.1  | theme button variant            | `_hover`                                                |
|  B  |          | 6.15.2.2  | theme button variant            | `_pressed`                                              |
|  B  |          | 6.15.2.3  | theme button variant            | `_disabled`                                             |
|  B+ | complete | 6.15.3    | theme button png                | Support png buttons                                     | EXTRA
|  B+ | complete | 6.15.4    | theme button svg                | Support svg buttons                                     | EXTRA
|  B  | complete | 6.16.1    | text window switcher            | `osd.window-switcher.width`                             | EXTRA
|  B  | complete | 6.16.2    | text window switcher            | `osd.window-switcher.padding`                           | EXTRA
|  B  | complete | 6.16.3    | text window switcher            | `osd.window-switcher.item.padding.x`                    | EXTRA
|  B  | complete | 6.16.4    | text window switcher            | `osd.window-switcher.item.padding.y`                    | EXTRA
|  B  | complete | 6.16.5    | text window switcher            | `osd.window-switcher.item.active.border.width`          | EXTRA
|  B  | complete | 6.16.6    | text window switcher            | `osd.window-switcher.preview.border.width`              | EXTRA
|  B  | complete | 6.16.7    | text window switcher            | `osd.window-switcher.preview.border.color`              | EXTRA
|  B  | complete | 6.16.8    | text window switcher            | `osd.window-switcher.preview.boxes.width`               | EXTRA
|  B  | complete | 6.16.9    | text window switcher            | `osd.window-switcher.preview.boxes.height`              | EXTRA
|  B  | complete | 7.0.1     | menu general                    | Parse menu.xml in accordance with Openbox 3.6 spec      |
|  B  | complete | 7.0.2     | menu general                    | Handle pointer input                                    |
|  B+ | complete | 7.0.3     | menu general                    | Handle keyboard input                                   |
|  B  | complete | 7.1.2     | menu syntax general             | `label`                                                 |
|  B+ | complete | 7.1.4     | menu syntax general             | `execute`                                               | Pipe-menus
|  B  | complete | 7.3.2     | menu syntax separator           | `<separator label=""/>`                                 | For separator with text
|  B  | complete | 7.4.1     | menu builtin                    | `client-list-combined-menu`                             |
|  B  | complete | 7.4.4     | menu builtin                    | `client-send-to-menu`                                   |
|  B  | complete | 7.4.6     | menu builtin                    | `root-menu`                                             |
|  B  | complete | 8.2.1     | extra                           | `<snapping>`                                            |
|  B  | complete | 8.2.2     | extra                           | `<snapping><range>`                                     |
|  B  | complete | 8.2.3     | extra                           | `<snapping><topMaximize>`                               |
|  B  | complete | 8.2.4     | extra                           | `<snapping><notifyClient>`                              |
|  B  | complete | 8.2.5     | extra                           | `<snapping><overlay>`                                   |
|  B  | complete | 9.1.1     | Regions                         | `<regions><region>`                                     |
