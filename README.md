# MacroIno: Arduino meets Python

MacroIno is an open-source project which allows users to interact with their PC and set macros.

MacroIno needs an Arduino(/-based) board and the `macroino_client.py` script which should run on the PC


The script on the Arduino simply sends digits via the Serial Protocol which will be catched by the Python Script.
The Python Script decode the Bytes which came via Serial and temporarily safes it in a variable.

If a specified digit is in the Serial Transmission of the Arduino, the Python script will execute a shortcut

Example Scenario:

ARDUINO                                 CLIENT-SCRIPT
Button pressed > Sends 1 via Serial > Catches the 1, decode it and execute the "STRG+V" shortcut

or

ARDUINO                                 CLIENT-SCRIPT
Button not pressed > Sends 0 via Serial > Catches the 0,decode it and do nothing

## How to set own macros?
You have to change this line: `keyboard.press_and_release('strg+v')` in the client script.
You just have to change the string in the round brackets to your shortcut

For example:
`keyboard.press_and_release('strg+v')` - Pasting clipboard
`keyboard.press_and_release('strg+c')` - Copying selection
`keyboard.press_and_release('enter')` - Press enter
and so on...

## Contact
If you need help or want to know something, feel free to write me an email on renaxdev@outlook.de or on discord to Renax#6191

