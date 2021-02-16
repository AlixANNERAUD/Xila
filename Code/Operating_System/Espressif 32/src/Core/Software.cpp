#include "Core/Software.hpp"

//Software class

Software_Class *Software_Class::Instance_Pointer = NULL;
Software_Handle_Class *Software_Class::Handle_Pointer = NULL;

Software_Class::Software_Class(uint8_t Task_Queue_Size)
{
  if (Task_Queue_Size != 0)
  {
    Command_Queue_Handle = xQueueCreate(Task_Queue_Size, sizeof(uint16_t));
    if (Command_Queue_Handle == NULL)
    {
      Serial.print(F("Error cannot create software Queue !"));
      delete this;
    }
    else
    {
      Execute('O');
    }
  }
}

Software_Class::~Software_Class() // Destructor : close
{
  if (Instance_Pointer != this)
  {
    delete Instance_Pointer;
  }
  Instance_Pointer = NULL;
  vQueueDelete(Command_Queue_Handle);
}

void Software_Class::Open_File(File &File_To_Open)
{
}

void Software_Class::Set_Variable(const void *Variable, uint8_t Type, uint8_t Adress, uint8_t Size)
{
}

uint16_t Software_Class::Get_Command()
{
  uint16_t Command_Buffer = 0;
  xQueueReceive(Command_Queue_Handle, &Command_Buffer, 0);
  return Command_Buffer;
}

void Software_Class::Execute(uint16_t Command_To_Execute)
{
  xQueueSendToBack(Command_Queue_Handle, (void *)&Command_To_Execute, portMAX_DELAY);
}

void Software_Class::Execute(char Task_Method_Char1, char Task_Method_Char2)
{
  Execute(((uint16_t)Task_Method_Char1 << 8) | (uint16_t)Task_Method_Char2);
}

Software_Class *Software_Class::Load() // just an example
{
  if (Instance_Pointer == NULL)
  {
    Instance_Pointer = new Software_Class(6);
  }
  return Instance_Pointer;
}
