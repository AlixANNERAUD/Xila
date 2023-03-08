///
/// @file Animation.cpp
/// @author Alix ANNERAUD (alix@anneraud.fr)
/// @brief
/// @version 0.1.0
/// @date 04-03-2023
///
/// @copyright Copyright (c) 2023
///

#include "Core/System/System.hpp"
#include "Core/Graphics/Graphics.hpp"

using namespace Xila_Namespace;
using namespace Xila_Namespace::Graphics_Types;

// - Methods

Object_Type System_Class::Start_Load_Animation()
{
  Graphics.Take_Semaphore();

  Object_Type Background;
  Background.Create(Graphics.Get_Screen());
  Background.Set_Size(Percentage(100), Percentage(100));
  Background.Set_Alignment(Alignment_Type::Center);
  Background.Set_Style_Background_Color(Color_Type::Black, 0);
  Background.Set_Style_Pad_All(0, 0);

  Log_Verbose("System", "Background pointer : %X", Background.Get_Pointer());

  Log_Verbose("System", "Create logo...");

  Object_Type Logo;
  Logo.Create(Background);
  Logo.Set_Size(256, 256);
  Logo.Set_Alignment(Alignment_Type::Center);
  Logo.Set_Style_Pad_All(0, 0);
  Logo.Set_Style_Background_Color(Color_Type::White, 0);
  // Logo.Set_Style_Background_Opacity(Opacity_Type::Transparent, 0);
  Logo.Set_Style_Shadow_Color(Color_Type::White, 0);

  Log_Verbose("System", "Logo pointer : %X", Logo.Get_Pointer());

  {
    Object_Type Red;
    Red.Create(Logo);
    Red.Set_Size(40, 84);
    Red.Set_Alignment(Alignment_Type::Top_Left, 64, 64);
    Red.Set_Style_Background_Color(Color_Type::Red[4], 0);
    Red.Set_Style_Shadow_Color(Color_Type::White, 0);
    // Red.Set_Style_Opacity(Opacity_Type::Transparent, 0);


    Log_Verbose("System", "Logo pointer : %X", lv_obj_get_parent(Red.Get_Pointer()));
    Log_Verbose("System", "Logo pointer : %X", Logo.Get_Pointer());
    Log_Verbose("System", "Red parent pointer : %X", Red.Get_Parent().Get_Pointer());
  }

  {
    Object_Type Blue;
    Blue.Create(Logo);
    Blue.Set_Size(84, 40);
    Blue.Set_Alignment(Alignment_Type::Bottom_Left, 64, -64);
    Blue.Set_Style_Background_Color(Color_Type::Blue[4], 0);
    Blue.Set_Style_Shadow_Color(Color_Type::White, 0);
    // Blue.Set_Style_Opacity(Opacity_Type::Transparent, 0);
  }

  {
    Object_Type Green;
    Green.Create(Logo);
    Green.Set_Size(40, 84);
    Green.Set_Alignment(Alignment_Type::Bottom_Right, -64, -64);
    Green.Set_Style_Background_Color(Color_Type::Green[4], 0);
    Green.Set_Style_Shadow_Color(Color_Type::White, 0);
    // Green.Set_Style_Opacity(Opacity_Type::Transparent, 0);
  }

  {
    Object_Type Yellow;
    Yellow.Create(Logo);
    Yellow.Set_Size(84, 40);
    Yellow.Set_Alignment(Alignment_Type::Top_Right, -64, 64);
    Yellow.Set_Style_Background_Color(Color_Type::Yellow[4], 0);
    Yellow.Set_Style_Shadow_Color(Color_Type::White, 0);
    // Yellow.Set_Style_Opacity(Opacity_Type::Transparent, 0);
  }

  Log_Verbose("System", "Create logo animation...");
  // Graphics_Types::Animation_Type Animation;
  // Animation.Create();
  // Animation.Set_Variable(&Logo);
  // Animation.Set_Values(64, 255);
  // Animation.Set_Time(1000);
  // Animation.Set_Playback_Delay(0);
  // Animation.Set_Playback_Time(1000);
  // Animation.Set_Repeat_Delay(0);
  // Animation.Set_Repeat_Count(LV_ANIM_REPEAT_INFINITE); // TODO : Define a constant for this
  // Animation.Set_Path_Callback(Graphics_Types::Animation_Type::Path_Ease_In_Out);
  // Animation.Set_Execution_Callback(this->Load_Animation_Callback);
  ////Animation.Start();
  Log_Verbose("System", "Finish logo animation...");
  Graphics.Give_Semaphore();
  Log_Verbose("System", "Return from logo animation...");
  return Logo;
}

void System_Class::Stop_Load_Animation(Object_Type *Logo)
{
  Graphics_Types::Animation_Type::Delete(&Logo, this->Load_Animation_Callback);
}

void System_Class::Load_Animation_Callback(void *Object, int32_t Value)
{
  Log_Verbose("System", "Load animation callback...");
  static uint8_t Animated_Part = 2;

  if ((Value == 255) || (Value == 64))
  {
    if ((Animated_Part == 4))
    {
      if (Value == 64)
      {
        Animated_Part = 1;
      }
    }
    else
    {
      Animated_Part++;
    }
  }

  Object_Type Next_Part = static_cast<Object_Type *>(Object)->Get_Child(Animated_Part - 1);

  if ((Animated_Part % 2) == 0)
  {

    Next_Part.Set_Style_Shadow_Width(255 + 64 - Value, 0);
    Next_Part.Set_Style_Opacity(255 + 64 - (uint8_t)Value, 0);

    Object_Type Previous_Part = static_cast<Object_Type *>(Object)->Get_Child(Animated_Part - 2);

    Previous_Part.Set_Style_Shadow_Width(Value, 0);
    Previous_Part.Set_Style_Opacity(Value, 0);
  }
  else
  {

    Next_Part.Set_Style_Shadow_Width(Value, 0);
    Next_Part.Set_Style_Opacity(Value, 0);

    if (Animated_Part == 1)
    {

      Object_Type Previous_Part = static_cast<Object_Type *>(Object)->Get_Child(3);

      Previous_Part.Set_Style_Shadow_Width(255 + 64 - Value, 0);
      Previous_Part.Set_Style_Opacity(255 + 64 - (uint8_t)Value, 0);
    }
    else
    {

      Object_Type Previous_Part = static_cast<Object_Type *>(Object)->Get_Child(Animated_Part - 2);

      Previous_Part.Set_Style_Shadow_Width(255 + 64 - Value, 0);
      Previous_Part.Set_Style_Opacity(255 + 64 - (uint8_t)Value, 0);
    }
  }
}