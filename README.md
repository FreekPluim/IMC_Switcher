## IMC Switcher (Only tested with UE 5.4)

This is a very simple plugin with which you can set a specific Input mapping context to active while removing all others in Unreal Engine 5.

IMPORTANT: No optimisation has been done to this code. Its purely functional. Use at your own risk.

### How To install

1. Download the IMCSwitcher folder from this repo or fork the repo.
2. Put the downloaded folder in the plugins folder of your Unreal Engine Project.
3. Open "<YourProject>.build.cs" and add "IMCSwitcher" to the "PrivateDependencyModuleNames".
![alt text](https://github.com/FreekPluim/IMC_Switcher/blob/main/Images/PrivateDependency.png?raw=true)
4. Build your solution file and enjoy

### How to use
The program is a very simple world subsystem.

1. create a new node and search for IMC Switcher.
2. Get the IMCSwitcherSubsystem_P
3. From this call the function "Set Active IMC"
4. As new IMC Set the one you want to activate. All other subsystems will be deactivated.

![alt text](https://github.com/FreekPluim/IMC_Switcher/blob/main/Images/IMCSwitcher.png?raw=true)

