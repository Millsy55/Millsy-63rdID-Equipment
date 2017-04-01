 class CfgPatches
 {
 	class Millsy_63rdID_Backpacks
 	{
 		units[] = {};
 		weapons[] = {};
 		requiredVersion = 0.1;
 		requiredAddons[] = {"A3_Weapons_F"};
 	};
 };



class cfgVehicles
{
    class B_Kitbag_Base;
    class OCP_Kitbag: B_Kitbag_Base
    {
        author = "Millsy";
    _generalMacro="OCP_Kitbag";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\Bags\Backpack_Fast";
        displayName = "Kitbag (OCP)";
        picture = "\A3\weapons_f\Ammoboxes\Bags\data\ui\icon_b_c_kitbag_mcamo.paa";
        hiddenSelectionsTextures[] = {"\Millsy_63rdID_Backpacks\data\OCP_KitBag.paa"};
    };
    class MTP_Kitbag_MED1: B_Kitbag_Base
    {
        author = "Millsy";
    _generalMacro="OCP_Kitbag_MED1";
        scope = 2;
        model = "\A3\weapons_f\Ammoboxes\Bags\Backpack_Fast";
        displayName = "Kitbag (OCP) (Medical 1)";
        picture = "\A3\weapons_f\Ammoboxes\Bags\data\ui\icon_b_c_kitbag_mcamo.paa";
        hiddenSelectionsTextures[] = {"\Millsy_63rdID_Backpacks\data\OCP_KitBag_MED1.paa"};
    };

    class MTP_Kitbag_MED2: B_Kitbag_Base
        {
            author = "Millsy";
        _generalMacro="OCP_Kitbag_MED2";
            scope = 2;
            model = "\A3\weapons_f\Ammoboxes\Bags\Backpack_Fast";
            displayName = "Kitbag (OCP) (Medical 2)";
            picture = "\A3\weapons_f\Ammoboxes\Bags\data\ui\icon_b_c_kitbag_mcamo.paa";
            hiddenSelectionsTextures[] = {"\Millsy_63rdID_Backpacks\data\OCP_KitBag_MED2.paa"};
        };

    class MTP_Kitbag_MED3: B_Kitbag_Base
             {
                 author = "Millsy";
             _generalMacro="OCP_Kitbag_MED3";
                 scope = 2;
                 model = "\A3\weapons_f\Ammoboxes\Bags\Backpack_Fast";
                 displayName = "Kitbag (OCP) (Medical 3)";
                 picture = "\A3\weapons_f\Ammoboxes\Bags\data\ui\icon_b_c_kitbag_mcamo.paa";
                 hiddenSelectionsTextures[] = {"\Millsy_63rdID_Backpacks\data\OCP_KitBag_MED3.paa"};
             };

    class MTP_Kitbag_ENG1: B_Kitbag_Base
                 {
                     author = "Millsy";
                 _generalMacro="OCP_Kitbag_MED3";
                     scope = 2;
                     model = "\A3\weapons_f\Ammoboxes\Bags\Backpack_Fast";
                     displayName = "Kitbag (OCP) (Engineer 1)";
                     picture = "\A3\weapons_f\Ammoboxes\Bags\data\ui\icon_b_c_kitbag_mcamo.paa";
                     hiddenSelectionsTextures[] = {"\Millsy_63rdID_Backpacks\data\OCP_KitBag_ENG1.paa"};
                 };

    class MTP_Kitbag_COM1: B_Kitbag_Base
                 {
                     author = "Millsy";
                 _generalMacro="OCP_Kitbag_COM1";
                     scope = 2;
                     model = "\A3\weapons_f\Ammoboxes\Bags\Backpack_Fast";
                     displayName = "Kitbag (OCP) (Command 1)";
                     picture = "\A3\weapons_f\Ammoboxes\Bags\data\ui\icon_b_c_kitbag_mcamo.paa";
                     hiddenSelectionsTextures[] = {"\Millsy_63rdID_Backpacks\data\OCP_KitBag_COM1.paa"};
                 };


};
