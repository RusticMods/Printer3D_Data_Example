class CfgMods 
{
    class Printer3D_Data 
    {
        dir = "Printer3D_Data";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "Printer3D_Data";
        credits = "Rustic";
        author = "Rustic";
        authorID = "69";
        extra = 0;
        type = "mod";
        dependencies[] = {"World"};
        class defs {
            class worldScriptModule {
                value = "";
                files[] = {"Printer3D_Data/Scripts/4_World"};
            };
        };
    };
};
class CfgPatches 
{
    class Printer3D_Data 
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"DZ_Data", "DZ_Scripts", "JM_CF_Scripts", "RusticModsCore", "Printer3D"};
    };
};

class CfgVehicles 
{
    class Container_Base;
    class Inventory_Base;
    class Printer3D_FilamentBase;
    class Printer3D_FolderBase;
    
    //---------------------------------------//
	//---------------Filaments---------------//
	//---------------------------------------//
    
    class Printer3D_Filament_T1_Blue : Printer3D_FilamentBase
    {
        scope = 2;

        displayName = "Blue Filament";
        descriptionShort = "Blue";

        hiddenSelections[] = {"FilamentColor"};
        hiddenSelectionsTextures[] = {"Printer3D_Data\Data\Blue.paa"};

        varQuantityInit = 1000;
        varQuantityMax = 1000;
    };

    //---------------------------------------//
	//----------------Folders----------------//
	//---------------------------------------//
        
    class Printer3D_FolderBandageDressing : Printer3D_FolderBase
    {
        scope = 2;
        
        printerPrintTypename = "BandageDressing";
        printerDisplayname = "Bandage";

        printerTimeToPrint = "5";
        printerFilamentAmount = "1000";
        printerFilamentTier = "1";
        printerPrintQuantity = "1";

        varQuantityInit = 100;
        varQuantityMax = 100;
    };
}