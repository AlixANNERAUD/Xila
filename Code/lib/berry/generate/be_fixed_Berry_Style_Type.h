#include "be_constobj.h"

static be_define_const_map_slots(Berry_Style_Type_map) {
    { be_const_key(Set_Opacity, 5), be_const_ctype_func(Berry_Style_Class_Set_Opacity_325D7AF0_8A1B_4B30_92D7_8EC3C52947FC) },
    { be_const_key(Set_Background_Opacity, 75), be_const_ctype_func(Berry_Style_Class_Set_Background_Opacity_2C452260_9535_412A_A02F_C9767253DDD2) },
    { be_const_key(Set_Line_Width, 55), be_const_ctype_func(Berry_Style_Class_Set_Line_Width_8D7E5CBA_F539_4C33_8DE1_BB36DBA1D8D0) },
    { be_const_key(Set_Base_Direction, -1), be_const_ctype_func(Berry_Style_Class_Set_Base_Direction_35C389E5_4139_4327_BBAB_4BAD00FB0FC2) },
    { be_const_key(Set_Line_Dash_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Line_Dash_Width_75F05B51_DC3F_4BD4_8018_CB407029245A) },
    { be_const_key(Set_Line_Dash_Gap, 35), be_const_ctype_func(Berry_Style_Class_Set_Line_Dash_Gap_D00D8714_5186_44F0_AFDF_5442DE206CB6) },
    { be_const_key(Reset, -1), be_const_ctype_func(Berry_Style_Class_Reset_C146E9C6_60D4_4DC4_8232_830330409451) },
    { be_const_key(Set_Pad_Gap, 78), be_const_ctype_func(Berry_Style_Class_Set_Pad_Gap_43D53AE8_006A_43FF_AADC_BFBE7BB41AA2) },
    { be_const_key(Set_Translate_X_, -1), be_const_ctype_func(Berry_Style_Class_Set_Translate_X_125BACEA_EAE7_4054_8423_E6FE1E105EB4) },
    { be_const_key(Set_Background_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Color_34B08916_E26F_4C2F_807D_7580BF12C9AD) },
    { be_const_key(Set_Grid_Cell_Column_Position, 88), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Column_Position_25808653_8241_4A47_B7D5_3EFECCA7C767) },
    { be_const_key(Set_Background_Image_Recolor, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Recolor_FB67D17C_50E0_4B9E_8928_BF089816D0AC) },
    { be_const_key(Set_Flex_Main_Place, 48), be_const_ctype_func(Berry_Style_Class_Set_Flex_Main_Place_2C1B0FF1_522D_4BAA_B889_C0839D19DE87) },
    { be_const_key(Set_Animation_Time, -1), be_const_ctype_func(Berry_Style_Class_Set_Animation_Time_BA8E7070_EB0E_411E_B089_65CBA059A863) },
    { be_const_key(Set_Background_Image_Tiled, 76), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Tiled_6F4B2729_5EF0_4433_8AEC_9B6192499F2A) },
    { be_const_key(Set_Background_Gradient_Direction, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Gradient_Direction_90FBF65D_5D94_45C8_A40A_6EBD520F8A07) },
    { be_const_key(Set_Outline_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Outline_Color_784B9738_E1CD_4CAA_AFC2_9EB93DD4F53F) },
    { be_const_key(Set_Background_Main_Stop, 65), be_const_ctype_func(Berry_Style_Class_Set_Background_Main_Stop_8753A433_70CF_4FBC_B442_46D1DD1D2BD7) },
    { be_const_key(Set_Outline_Opacity, 66), be_const_ctype_func(Berry_Style_Class_Set_Outline_Opacity_2BE778C5_A77B_4CE9_91FE_8B07C5E44C54) },
    { be_const_key(Remove_Property, -1), be_const_ctype_func(Berry_Style_Class_Remove_Property_41EA2BDE_E9CE_41EA_9CBF_42569B8AAA2D) },
    { be_const_key(Set_Grid_Row_Descriptor_Array, 67), be_const_ctype_func(Berry_Style_Class_Set_Grid_Row_Descriptor_Array_84586F9B_98B9_4457_8251_C92E6FCEEFF6) },
    { be_const_key(Set_Background_Dither_Mode, 58), be_const_ctype_func(Berry_Style_Class_Set_Background_Dither_Mode_B022FB4F_EB6E_442E_AA1C_5437A05BA8A0) },
    { be_const_key(Set_Border_Width, 93), be_const_ctype_func(Berry_Style_Class_Set_Border_Width_06B96A8C_D3EC_432F_BA77_F35F639F4D8A) },
    { be_const_key(Set_Color_Filter_Descriptor, 90), be_const_ctype_func(Berry_Style_Class_Set_Color_Filter_Descriptor_B936A25C_EF88_4C88_BE1C_A857E5D66D44) },
    { be_const_key(Register_Property, -1), be_const_ctype_func(Berry_Style_Class_Register_Property_F79FE627_107C_4F7C_941C_4465BCD799C0) },
    { be_const_key(Set_Arc_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Arc_Opacity_5CBD6DF3_2C7D_4E72_8BDD_2AEBF19C2036) },
    { be_const_key(Set_Transform_Height, 10), be_const_ctype_func(Berry_Style_Class_Set_Transform_Height_65195AE6_2CF8_465B_BCD3_599176913A14) },
    { be_const_key(Set_Border_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Color_B52CD2A1_3845_4F43_851F_9A5B89F12A40) },
    { be_const_key(Set_Border_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Opacity_ED6A5B4A_0AD6_40F9_9CD4_6689B3542C98) },
    { be_const_key(Set_Maximum_Height, -1), be_const_ctype_func(Berry_Style_Class_Set_Maximum_Height_9F1ED9DD_2469_417D_BB5A_D2C7936CE8C3) },
    { be_const_key(Set_Background_Gradient_Color, 0), be_const_ctype_func(Berry_Style_Class_Set_Background_Gradient_Color_8ABA0F5A_D6F2_4345_926E_693E843E9EAA) },
    { be_const_key(Set_Flex_Flow, -1), be_const_ctype_func(Berry_Style_Class_Set_Flex_Flow_D0B4CB2D_B90C_4303_B29A_7CD95BF78B74) },
    { be_const_key(Set_Background_Image_Recolor_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Recolor_Opacity_BE64C8B9_8C0B_48FB_B375_1A3978DB3932) },
    { be_const_key(Set_Grid_Column_Descriptor_Array, 6), be_const_ctype_func(Berry_Style_Class_Set_Grid_Column_Descriptor_Array_591E86A6_25B2_46EA_A12D_81A388D3EB42) },
    { be_const_key(Set_Minimum_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Minimum_Width_96257F47_86BA_4B04_B8F5_9EA9CB9AA5B2) },
    { be_const_key(Initialize, -1), be_const_ctype_func(Berry_Style_Class_Initialize_5730DF25_A50A_40BA_9E1A_736C8FB7EC7F) },
    { be_const_key(Set_Border_Post, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Post_A1D2B3F3_9FCA_4BE9_AFDB_3FF1FC577912) },
    { be_const_key(Set_Grid_Cell_Column_Span, 69), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Column_Span_A1735B20_DC6E_40AE_BCA7_C6D28CDCA9F5) },
    { be_const_key(Set_Line_Rounded, 14), be_const_ctype_func(Berry_Style_Class_Set_Line_Rounded_5B9F21D6_236A_474D_83A1_9283C3E86B76) },
    { be_const_key(Set_Shadow_Offset_Y, 4), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Offset_Y_74EBC082_9AD4_44E4_AE20_208D39BC4163) },
    { be_const_key(Set_Alignment, -1), be_const_ctype_func(Berry_Style_Class_Set_Alignment_3A3AA46D_8ED9_4DED_8F1D_E277D3FF5681) },
    { be_const_key(Set_Flex_Cross_Place, 32), be_const_ctype_func(Berry_Style_Class_Set_Flex_Cross_Place_4C3536AA_7368_4D26_B31E_338B1A579212) },
    { be_const_key(Set_Image_Recolor_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Image_Recolor_Opacity_B8A0256C_3D5F_47C3_BD78_0192FAE6AE23) },
    { be_const_key(Set_Grid_Row_Alignment, 97), be_const_ctype_func(Berry_Style_Class_Set_Grid_Row_Alignment_D94E6DC0_05E9_47B4_9536_80F2D563575E) },
    { be_const_key(Set_Line_Color, 18), be_const_ctype_func(Berry_Style_Class_Set_Line_Color_46C1071D_E64F_4E44_81A2_168213808FE5) },
    { be_const_key(Set_Line_Opacity, 43), be_const_ctype_func(Berry_Style_Class_Set_Line_Opacity_F664E717_D67B_4995_ABFC_D596A44BBE2E) },
    { be_const_key(Set_Flex_Grow, 1), be_const_ctype_func(Berry_Style_Class_Set_Flex_Grow_67064B46_E33D_4319_8F8D_D48D64CBA307) },
    { be_const_key(Set_Y, 24), be_const_ctype_func(Berry_Style_Class_Set_Y_CAE4D930_25E3_4842_BF8C_E8E1D60A53D1) },
    { be_const_key(Set_Height, -1), be_const_ctype_func(Berry_Style_Class_Set_Height_9695A4C7_DCA8_4C02_9CA1_A23CC71DC4AB) },
    { be_const_key(Set_Pad_Top, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Top_21A56553_54C0_4633_8835_181A07B2E14E) },
    { be_const_key(Set_Arc_Rounded, -1), be_const_ctype_func(Berry_Style_Class_Set_Arc_Rounded_30DD8076_FD70_4978_8747_AE2077693273) },
    { be_const_key(Set_Clip_Corner, -1), be_const_ctype_func(Berry_Style_Class_Set_Clip_Corner_37C066F3_8988_4330_9BF8_C4FC2B37E5E9) },
    { be_const_key(Set_Maximum_Width, 36), be_const_ctype_func(Berry_Style_Class_Set_Maximum_Width_3ED66E6C_D680_45E4_AD2C_4F2FABD01FCA) },
    { be_const_key(Set_Text_Color, 50), be_const_ctype_func(Berry_Style_Class_Set_Text_Color_10FCD4A1_9E72_49F2_AFE9_B33738FECFB7) },
    { be_const_key(Set_Transform_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Transform_Width_AEFE4B0F_E0F0_40C3_A51A_7A7B8ED9CB15) },
    { be_const_key(Set_Pad_Row, 84), be_const_ctype_func(Berry_Style_Class_Set_Pad_Row_1ECFFC0D_55E2_4883_85D5_6227D6AA4A61) },
    { be_const_key(Set_Text_Line_Space, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Line_Space_03205A7A_F01A_4FA9_8620_114C16477973) },
    { be_const_key(Set_Arc_Color, -1), be_const_ctype_func(Berry_Style_Class_Set_Arc_Color_F650D353_C016_49AF_B9CF_F5DB911FFD5E) },
    { be_const_key(Set_Translate_Y, 101), be_const_ctype_func(Berry_Style_Class_Set_Translate_Y_25450AFD_6221_473C_A4BD_FC4C7B29B76F) },
    { be_const_key(Set_Radius, 21), be_const_ctype_func(Berry_Style_Class_Set_Radius_C4351A0A_5C99_4EF3_AA2D_83B827EEDC2F) },
    { be_const_key(Set_Background_Gradient_Stop, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Gradient_Stop_5D9A2943_F5B0_4AF0_9595_4BE7DF960497) },
    { be_const_key(Set_Minimum_Height, -1), be_const_ctype_func(Berry_Style_Class_Set_Minimum_Height_09B3CF6F_615A_42F9_9528_9D48FCBDF68A) },
    { be_const_key(Set_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Width_F3081E8F_1DD8_4427_B9CC_E861FB448054) },
    { be_const_key(Set_Grid_Cell_X__Alignment, 27), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_X_Alignment_E82B7D73_B3DD_4BB1_837F_459543FD35AB) },
    { be_const_key(Set_Pad_Bottom, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Bottom_FE561D4B_4850_4751_B803_17096C9E9965) },
    { be_const_key(Set_Transform_Zoom, -1), be_const_ctype_func(Berry_Style_Class_Set_Transform_Zoom_F85C8D1D_BC8B_4F8B_9A7B_FB5D910F8000) },
    { be_const_key(Set_Shadow_Spread, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Spread_C2798C1B_7132_4771_B3DF_6959F21AB1D5) },
    { be_const_key(Set_Shadow_Width, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Width_02FC52B6_B4E1_489C_A831_91A9B4750F32) },
    { be_const_key(Set_Grid_Column_Alignment, 13), be_const_ctype_func(Berry_Style_Class_Set_Grid_Column_Alignment_90B2AB47_E6AD_4B3E_B025_D999BC040736) },
    { be_const_key(Set_Layout, 11), be_const_ctype_func(Berry_Style_Class_Set_Layout_BC3B8B4D_707F_4FDD_AFE5_D9AA19569596) },
    { be_const_key(Set_Text_Alignment, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Alignment_97FA7A8E_4307_4475_8524_A744C5AEF4D5) },
    { be_const_key(init, -1), be_const_ctype_func(Berry_Style_Class_Initialize_F1A07ED4_15A9_4FDD_BC2A_05AC4224A8FA) },
    { be_const_key(Set_Border_Side, -1), be_const_ctype_func(Berry_Style_Class_Set_Border_Side_38E5453B_0724_4097_9F70_15ADAF66042F) },
    { be_const_key(Set_Pad_All, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_All_2438447B_1993_4463_81D6_2FCB732E0429) },
    { be_const_key(Set_Text_Letter_Space, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Letter_Space_E951213F_39CA_4D5A_B90C_A4C18DA4C880) },
    { be_const_key(Set_Color_Filter_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Color_Filter_Opacity_0E36D88F_FC41_4FDF_AC70_7F9EE828512C) },
    { be_const_key(Set_Pad_Left, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Left_81C29A4D_9C92_4500_9D48_4B708DE24ED9) },
    { be_const_key(Set_Image_Opacity, 56), be_const_ctype_func(Berry_Style_Class_Set_Image_Opacity_A70683A7_FC72_48E0_BB4D_C8E6B588187C) },
    { be_const_key(Set_Background_Image_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Background_Image_Opacity_60E4AEE7_EE8B_47AB_8635_9379AF5197B9) },
    { be_const_key(Set_Grid_Cell_Row_Span, -1), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Row_Span_BA88808E_9ABE_445E_B307_7E5246DE545B) },
    { be_const_key(Set_Blend_Mode, 40), be_const_ctype_func(Berry_Style_Class_Set_Blend_Mode_4CDB9BDA_ADB0_4C77_8B9A_88E250CA8591) },
    { be_const_key(Set_Outline_Width, 3), be_const_ctype_func(Berry_Style_Class_Set_Outline_Width_C09A715F_7CA5_45D3_9CDD_A232C7E58CBD) },
    { be_const_key(Set_Flex_Track_Place, 9), be_const_ctype_func(Berry_Style_Class_Set_Flex_Track_Place_C1355F87_0E78_427B_915F_ADC7E4DF6C66) },
    { be_const_key(_p, -1), be_const_var(0) },
    { be_const_key(Set_Animation_Speed, -1), be_const_ctype_func(Berry_Style_Class_Set_Animation_Speed_5C8A3916_D304_4C51_BD4F_9A827701E5C9) },
    { be_const_key(Set_Pad_Column, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Column_76A4A441_D087_4BDF_ACB6_23988A487B76) },
    { be_const_key(Set_Text_Decor, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Decor_EC440ABC_EC1F_4E19_91D3_C7281CE617B3) },
    { be_const_key(Set_Shadow_Offset_X_, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Offset_X_607A1E93_F338_4FBE_92CA_7BDC263D082C) },
    { be_const_key(Set_Size, -1), be_const_ctype_func(Berry_Style_Class_Set_Size_6E26C00E_64EF_4025_96F8_7FB4A9F2E7FA) },
    { be_const_key(Set_Shadow_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Opacity_180E57A5_D937_4E5B_A082_EDD71EB2FE42) },
    { be_const_key(deinit, 77), be_const_ctype_func(Berry_Style_Class_Deinitialize_B94AF0CC_12C7_4CE8_B9A9_E9552012DAB2) },
    { be_const_key(Set_Arc_Width, 87), be_const_ctype_func(Berry_Style_Class_Set_Arc_Width_DFED683A_96D7_446C_8731_4919008CFA9E) },
    { be_const_key(Set_Pad_Horizontal, 19), be_const_ctype_func(Berry_Style_Class_Set_Pad_Horizontal_9244C591_FBA8_4178_BA86_80C5FF9E2C56) },
    { be_const_key(Set_X_, -1), be_const_ctype_func(Berry_Style_Class_Set_X_48F906F3_7747_4C68_8DEB_A5F49004819F) },
    { be_const_key(Set_Pad_Right, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Right_1F38E0A0_1DEB_4FE8_A11C_3DCE32359255) },
    { be_const_key(Set_Shadow_Color, 73), be_const_ctype_func(Berry_Style_Class_Set_Shadow_Color_960C72C2_F51D_41D9_9011_550868F44027) },
    { be_const_key(Set_Grid_Cell_Y_Alignment, -1), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Y_Alignment_C6DCBC99_2118_424C_9268_D65918C88B91) },
    { be_const_key(Set_Image_Recolor, -1), be_const_ctype_func(Berry_Style_Class_Set_Image_Recolor_85ADF2CB_D0F4_49E7_95DC_96E9C59E4480) },
    { be_const_key(Set_Grid_Cell_Row_Position, 22), be_const_ctype_func(Berry_Style_Class_Set_Grid_Cell_Row_Position_A66FD445_931C_4D3E_B72D_8CB300B9FC39) },
    { be_const_key(Set_Text_Opacity, -1), be_const_ctype_func(Berry_Style_Class_Set_Text_Opacity_2CAFE7A0_D47C_4090_80B7_864BB6442FA8) },
    { be_const_key(Set_Transform_Angle, -1), be_const_ctype_func(Berry_Style_Class_Set_Transform_Angle_A168A23A_8AC1_4906_9115_905C051D854E) },
    { be_const_key(Set_Outline_Pad, -1), be_const_ctype_func(Berry_Style_Class_Set_Outline_Pad_C9F9D119_4B31_481F_8B33_44C4B0411EEE) },
    { be_const_key(Set_Pad_Vertical, -1), be_const_ctype_func(Berry_Style_Class_Set_Pad_Vertical_B8D5A4F2_52FE_4E89_9CD9_DA8C605120E3) },
};

static be_define_const_map(
    Berry_Style_Type_map,
    103
);

BE_EXPORT_VARIABLE be_define_const_class(
    Berry_Style_Type,
    1,
    NULL,
    Style_Type
);