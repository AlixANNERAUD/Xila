#include "Software/Piano.hpp"

Piano_Class* Piano_Class::Instance_Pointer = NULL;

Piano_Class::Piano_Class() : Software_Class(6),
Offset(0),
Duration(200),
MIDI_Output(false)
{
    Xila.Task_Create(Main_Task, "Piano Task", Memory_Chunk(4), NULL, &Task_Handle);
    Execute(Xila.Open);
}

Piano_Class::~Piano_Class()
{
    Instance_Pointer = NULL;
}

Software_Class* Piano_Class::Load()
{
    if (Instance_Pointer == NULL)
    {
        Instance_Pointer = new Piano_Class();
    }
    return Instance_Pointer;
}

void Piano_Class::Main_Task(void *pvParameters)
{
    (void)pvParameters;
    while (1)
    {
        switch (Instance_Pointer->Get_Command())
        {
        case 0: //idle state
            Xila.Delay(10);
            break;
        case Xila.Open:
        case Xila.Maximize:
            Xila.Display.Set_Current_Page(F("Piano"));
            break;
        case Xila.Minimize:
            Xila.Task_Suspend();
            break;
        case Xila.Close:
            delete Instance_Pointer;
            Xila.Task_Delete();
            break;
        case 0x4320: //C
            Instance_Pointer->Play_Note(0);
            break;
        case 0x4323: //C#
            Instance_Pointer->Play_Note(1);
            break;
        case 0x4420: //D
            Instance_Pointer->Play_Note(2);
            break;
        case 0x4423: //D#
            Instance_Pointer->Play_Note(3);
            break;
        case 0x4520: //E
            Instance_Pointer->Play_Note(4);
            break;

        case 0x4620: //F
            Instance_Pointer->Play_Note(5);
            break;

        case 0x4623: //F#
            Instance_Pointer->Play_Note(6);
            break;

        case 0x4720: //G
            Instance_Pointer->Play_Note(7);
            break;

        case 0x4723: //G#
            Instance_Pointer->Play_Note(8);
            break;

        case 0x4120: //A
            Instance_Pointer->Play_Note(9);
            break;

        case 0x4123: //A#
            Instance_Pointer->Play_Note(10);
            break;

        case 0x4220: //B
            Instance_Pointer->Play_Note(11);
            break;

        case 0x6320: //c
            Instance_Pointer->Play_Note(12);
            break;

        case 0x6323: //c#
            Instance_Pointer->Play_Note(13);
            break;

        case 0x6420: //d
            Instance_Pointer->Play_Note(14);
            break;

        case 0x6423: //d#
            Instance_Pointer->Play_Note(15);
            break;

        case 0x6520: //e
            Instance_Pointer->Play_Note(16);
            break;

        case 0x6620: //f
            Instance_Pointer->Play_Note(17);
            break;

        case 0x6623: //f#
            Instance_Pointer->Play_Note(18);
            break;

        case 0x6720: //g
            Instance_Pointer->Play_Note(19);
            break;

        case 0x6723: //g#
            Instance_Pointer->Play_Note(20);
            break;

        case 0x6120: //a
            Instance_Pointer->Play_Note(21);
            break;

        case 0x6123: //a#
            Instance_Pointer->Play_Note(22);
            break;

        case 0x6220: //b
            Instance_Pointer->Play_Note(23);
            break;

        default:
            break;
        }
       Xila.Delay(10);
    }
}

void Piano_Class::Play_Note(uint8_t Note)
{
    Current_Note = Note_Frequency[Note] + Offset;
    Xila.Sound.Tone(Current_Note, Duration);
    
    dtostrf(Note_Frequency[Note], 3, 0, Temporary_Char);
    Temporary_Char[4] = ' ';
    Temporary_Char[5] = 'H';
    Temporary_Char[6] = 'z';
    Xila.Display.Set_Text(F("FREQVAL_TXT"), Temporary_Char);
    

    /*if (MIDI_Output == true)
    {
        Serial.write(144);
        Serial.write(Note);
        Serial.write(128);
        delay(Duration);
        Serial.write(128);
        Serial.write(Note);
        Serial.write(128);
    }*/
}