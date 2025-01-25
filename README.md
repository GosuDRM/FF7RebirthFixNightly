# Final Fantasy VII Rebirth Fix
[![Patreon-Button](https://raw.githubusercontent.com/Lyall/FF7RebirthFix/refs/heads/master/.github/Patreon-Button.png)](https://www.patreon.com/Wintermance) [![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/FF7RebirthFix/total.svg)](https://github.com/Lyall/FF7RebirthFix/releases)

This is a fork of Lyall's original ASI plugin for Final Fantasy VII Rebirth, distributed as a nightly builds available for early access. It might contain bugs

## Features
### General
- Adjustable framerate cap.

### Ultrawide/Narrower
- Support for any aspect ratio with corrected FOV.
- Centered 16:9 HUD.

## Installation
- Grab the latest release of FF7RebirthFix from [here.](https://github.com/Lyall/FF7RebirthFix/releases)
- Extract the contents of the release zip in to the the game folder.
(e.g. "**steamapps\common\FINAL FANTASY VII REBIRTH**" for Steam).

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**
- Open up the game properties in Steam and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- See **FF7RebirthFix.ini** to adjust settings.

## Known Issues
- HUD may appear blurry at wider aspect ratios such as 32:9.
- Some button prompts may appear off-screen.
- Fades to black do not span the screen and mask loading.
- Some HUD elements such as the blue glow around selections in the main menu are positioned incorrectly. 

## Recommended Mods
- [FFVIIHook](https://www.nexusmods.com/finalfantasy7rebirth/mods/4) by [emoose](https://github.com/emoose) - Unlocks the console and allows cvars to be overridden.

## Screenshots
| ![ezgif-6-f9ee9cf766](https://github.com/user-attachments/assets/1876814b-c14a-4048-86c8-2f552f086641) |
|:--------------------------:|
| Gameplay |

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.<br />
[Dumper-7](https://github.com/Encryqed/Dumper-7) for dumping the SDK.
