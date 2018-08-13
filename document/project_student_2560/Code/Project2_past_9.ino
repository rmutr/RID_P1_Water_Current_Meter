#include <SPI.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Keypad.h> 
#include <SD.h>
#include <RTClib.h>
File myFile;
LiquidCrystal_I2C lcd(0x27,20,4);
//-----------------------------------------

const int chipSelect=10;
boolean present=0;
//----------------------------------------


//-----------------------------------------
float New =0;
float old =0;
int buttonPin = 0;
int count;
int Gr = 0;
const int proc_pin = 13;
unsigned long time_old, time_new;
//-----------------------------------------
const byte ROWS= 4; 
const byte COLS= 4;
unsigned long previousTime = 0;
int Buzzer = 11;
int setTime1;

int state = 0;
int Top = 0;

int Sw = 0;
int Up = 0;
int Dw = 0;

int start = 0;
int buzzer = 0;
int Num=0;
//--------------------------------
String P1;
char customKey;
//--------------------------------
String sta = "";
int Station;
int Sn;
int Sn2;
int Sn3;
int Sn4;
int Sn5;
int Sn6;
int Sn7;
int Sn8;
int Sn9;
int Sn10;
int Sn11;
int Sn12;
int Sn13;
int Sn14;
int Sn15;
int Sn16;
int Sn17;
int Sn18;
int Sn19;
int Sn20;
//--------------------------------
String rrd = "";
float River_depth;
float Rd;
float Rd2;
float Rd3;
float Rd4;
float Rd5;
float Rd6;
float Rd7;
float Rd8;
float Rd9;
float Rd10;
float Rd11;
float Rd12;
float Rd13;
float Rd14;
float Rd15;
float Rd16;
float Rd17;
float Rd18;
float Rd19;
float Rd20;
float Rd21;
float Rd22;
float Rd23;
float Rd24;
float Rd25;
float Rd26;
float Rd27;
float Rd28;
float Rd29;
float Rd30;

//--------------------------------


String dep = ""; 
float Depth;
float Dh;
float Dh2;
float Dh3;
float Dh4;//////
float Dh5;
float Dh6;
float Dh7;
float Dh8;//////
float Dh9;
float Dh10;
float Dh11;
float Dh12;//////
float Dh13;
float Dh14;
float Dh15;
float Dh16;//////
float Dh17;
float Dh18;
float Dh19;
float Dh20;//////
float Dh21;
float Dh22;
float Dh23;
float Dh24;//////
float Dh25;
float Dh26;
float Dh27;
float Dh28;//////
float Dh29;
float Dh30;
float Dh31;
float Dh32;//////
float Dh33;
float Dh34;
float Dh35;
float Dh36;//////
float Dh37;
float Dh38;
float Dh39;
float Dh40;//////
float Dh41;
float Dh42;
float Dh43;
float Dh44;//////
float Dh45;
float Dh46;
float Dh47;
float Dh48;//////
float Dh49;
float Dh50;
float Dh51;
float Dh52;//////
float Dh53;
float Dh54;
float Dh55;
float Dh56;//////
float Dh57;
float Dh58;
float Dh59;
float Dh60;//////
float Dh61;
float Dh62;
float Dh63;
float Dh64;//////
float Dh65;
float Dh66;
float Dh67;
float Dh68;
float Dh69;//////
float Dh70;
float Dh71;
float Dh72;
float Dh73;//////
float Dh74;//////
float Dh75;//////
float Dh76;//////
float Dh77;//////
float Dh78;//////
float Dh79;//////
float Dh80;//////
float Dh81;
float Dh82;
float Dh83;
float Dh84;//////
float Dh85;
float Dh86;
float Dh87;
float Dh88;//////
float Dh89;
float Dh90;
float Dh91;
float Dh92;
float Dh93;//////
float Dh94;
float Dh95;
float Dh96;
float Dh97;//////
float Dh98;
float Dh99;
float Dh100;
float Dh101;
float Dh102;
float Dh103;//////
float Dh104;
float Dh105;
float Dh106;
float Dh107;//////
float Dh108;
float Dh109;
float Dh110;
//--------------------------------
String str = ""; 
float flo;

//--------------------------------

String are = ""; 
///--------------------------
float Area;
///-----------------------------------------
float Aa;
float Aa2;
float Aa3;
float Aa4;
float Aa5;
float Aa6;
float Aa7;
float Aa8;
float Aa9;
float Aa10;
float Aa11;
float Aa12;
float Aa13;
float Aa14;
float Aa15;
float Aa16;
float Aa17;
float Aa18;
float Aa19;
float Aa20;
float Aa21;
float Aa22;
float Aa23;
float Aa24;
float Aa25;
float Aa26;
float Aa27;
float Aa28;
float Aa29;
float Aa30;
//--------------------------------

float Q;
float Q2;
float Q3;
float Q4;
float Q5;
float Q6;
float Q7;
float Q8;
float Q9;
float Q10;
float Q11;
float Q12;
float Q13;
float Q14;
float Q15;
float Q16;
float Q17;
float Q18;
float Q19;
float Q20;
float Q21;
float Q22;
float Q23;
float Q24;
float Q25;
float Q26;
float Q27;
float Q28;
float Q29;
float Q30;
float Q31;
float Q32;
float Q33;
float Q34;
float Q35;
float Q36;
float Q37;
float Q38;
float Q39;
float Q40;
float Q41;
float Q42;
float Q43;
float Q44;
float Q45;
float Q46;
float Q47;
float Q48;
float Q49;
float Q50;
float Q51;
float Q52;
float Q53;
float Q54;
float Q55;
float Q56;
float Q57;
float Q58;
float Q59;
float Q60;
float Q61;
float Q62;
float Q63;
float Q64;
float Q65;
float Q66;
float Q67;
float Q68;
float Q69;
float Q70;
float Q71;
float Q72;
float Q73;
float Q74;
float Q75;
float Q76;
float Q77;
float Q78;
float Q79;
float Q80;
float Q81;
float Q82;
float Q83;
float Q84;
float Q85;
float Q86;
float Q87;
float Q88;
float Q89;
float Q90;
float Q91;
float Q92;
float Q93;
float Q94;
float Q95;
float Q96;
float Q97;
float Q98;
float Q99;
float Q100;
//--------------------------------
float T1;
float T2;
float T3;
float T4;
float T5;
float T6;
float T7;
float T8;
float T9;
float T10;
float T11;
float T12;
float T13;
float T14;
float T15;
float T16;
float T17;
float T18;
float T19;
float T20;
float T21;
float T22;
float T23;
float T24;
float T25;
float T26;
float T27;
float T28;
float T29;
float T30;
float T31;
float T32;
float T33;
float T34;
float T35;
float T36;
float T37;
float T38;
float T39;
float T40;
float T41;
float T42;
float T43;
float T44;
float T45;
float T46;
float T47;
float T48;
float T49;
float T50;
float T51;
float T52;
float T53;
float T54;
float T55;
float T56;
float T57;
float T58;
float T59;
float T60;
float T61;
float T62;
float T63;
float T64;
float T65;
float T66;
float T67;
float T68;
float T69;
float T70;
float T71;
float T72;
float T73;
float T74;
float T75;
float T76;
float T77;
float T78;
float T79;
float T80;
float T81;
float T82;
float T83;
float T84;
float T85;
float T86;
float T87;
float T88;
float T89;
float T90;
float T91;
float T92;
float T93;
float T94;
float T95;
float T96;
float T97;
float T98;
float T99;
float T100;
//--------------------------------
float co;
float co2;
float co3;
float co4;
float co5;
float co6;
float co7;
float co8;
float co9;
float co10;
float co11;
float co12;
float co13;
float co14;
float co15;
float co16;
float co17;
float co18;
float co19;
float co20;
float co21;
float co22;
float co23;
float co24;
float co25;
float co26;
float co27;
float co28;
float co29;
float co30;
float co31;
float co32;
float co33;
float co34;
float co35;
float co36;
float co37;
float co38;
float co39;
float co40;
float co41;
float co42;
float co43;
float co44;
float co45;
float co46;
float co47;
float co48;
float co49;
float co50;
float co51;
float co52;
float co53;
float co54;
float co55;
float co56;
float co57;
float co58;
float co59;
float co60;
float co61;
float co62;
float co63;
float co64;
float co65;
float co66;
float co67;
float co68;
float co69;
float co70;
float co71;
float co72;
float co73;
float co74;
float co75;
float co76;
float co77;
float co78;
float co79;
float co80;
float co81;
float co82;
float co83;
float co84;
float co85;
float co86;
float co87;
float co88;
float co89;
float co90;
//--------------------------------
float ans;
float ans1;
float ans2;
float ans3;
float ans4;
float ans5;
float ans6;
float ans7;
float ans8;
float ans9;
float ans10;
float ans11;
float ans12;
float ans13;
float ans14;
float ans15;
float ans16;
float ans17;
float ans18;
float ans19;
float ans20;
float ans21;
float ans22;
float ans23;
float ans24;
float ans25;
float ans26;
float ans27;
float ans28;
float ans29;
float ans30;
float ans31;
float ans32;
float ans33;
float ans34;
float ans35;
float ans36;
float ans37;
float ans38;
float ans39;
float ans40;
float ans41;
float ans42;
float ans43;
float ans44;
float ans45;
float ans46;
float ans47;
float ans48;
float ans49;
float ans50;
float ans51;
float ans52;
float ans53;
float ans54;
float ans55;
float ans56;
float ans57;
float ans58;
float ans59;
float ans60;
float ans61;
float ans62;
float ans63;
float ans64;
float ans65;
float ans66;
float ans67;
float ans68;
float ans69;
float ans70;
float ans71;
float ans72;
float ans73;
float ans74;
float ans75;
float ans76;
float ans77;
float ans78;
float ans79;
float ans80;
float ans81;
float ans82;
float ans83;
float ans84;
float ans85;
float ans86;
float ans87;
float ans88;
float ans89;
float ans90;
float ans91;
float ans92;
float ans93;
float ans94;
float ans95;
float ans96;
float ans97;
float ans98;
float ans99;
float ans110;
float ans111;
float ans112;
float ans113;
float ans114;
float ans115;
float ans116;
float ans117;
float ans118;
float ans119;
float ans120;
float ans121;
float ans122;
float ans123;
float ans124;
float ans125;
float ans126;
float ans127;
float ans128;
float ans129;
float ans130;
//--------------------------------

float V;
float V2;
float V3;
float V4;
float V5;
float V6;
float V7;
float V8;
float V9;
float V10;
float V11;
float V12;
float V13;
float V14;
float V15;
float V16;
float V17;
float V18;
float V19;
float V20;
float V21;
float V22;
float V23;
float V24;
float V25;
float V26;
float V27;
float V28;
float V29;
float V30;
float V31;
float V32;
float V33;
float V34;
float V35;
float V36;
float V37;
float V38;
float V39;
float V40;
float V41;
float V42;
float V43;
float V44;
float V45;
float V46;
float V47;
float V48;
float V49;
float V50;
float V51;
float V52;
float V53;
float V54;
float V55;
float V56;
float V57;
float V58;
float V59;
float V60;
float V61;
float V62;
float V63;
float V64;
float V65;
float V66;
float V67;
float V68;
float V69;
float V70;
float V71;
float V72;
float V73;
float V74;
float V75;
float V76;
float V77;
float V78;
float V79;
float V80;
float V81;
float V82;
float V83;
float V84;
float V85;
float V86;
float V87;
float V88;
float V89;
float V90;
float V91;
float V92;
float V93;
float V94;
float V95;
float V96;
float V97;
float V98;
float V99;
float V100;
//-----------------------------------------
RTC_DS3231 RTC;
DateTime Time;
char Year,Mon,Day,Hour,Min,Sec;

int Hour1;
int Min1;
int Day1;
int Mon1;
int Year1;
String Ho;
String Mi;
String Da;
String Mo;
String Ye;

char keys[ROWS][COLS]=
{
{'1', '2', '3', 'A'},
{'4', '5', '6', 'B'},
{'7', '8', '9', 'C'},
{'.', '0', '#', 'D'},
};


byte rowPins[ROWS] = {9,8,7,6}; //Rows 0 to 3 ตั้งค่าการต่อ Pin ของ Keypad
byte colPins[COLS] = {5,4,3,2}; //Columns 0 to 3


Keypad keypad= Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);
void setup()
{
   Serial.begin(9600);
  pinMode(52, INPUT);
  pinMode(51, INPUT);
  pinMode(49, INPUT); 
  lcd.init();
  lcd.backlight();
  lcd.blink(); 
  checkSD();
  RTC.begin();


 if(present==1)
  {
  lcd.clear();
  lcd.setCursor(7,0);
  lcd.print("RMUTR");
  lcd.setCursor(0,1);
  lcd.print("Flowrate PROJECT :)");
  }
}
void loop()
{
 
  
 unsigned long showTime = millis();
  char key = keypad.getKey();
  

if(key != NO_KEY && key != '#'&& key != 'B'&& key != 'C'&& key != 'D')
  {
    setTime1 = (key - 48);
   if (key == 'A')
  {    
    Station = sta.toFloat();
    River_depth = rrd.toFloat();
    Depth = dep.toFloat();
    flo = str.toFloat();
    Area =are.toFloat();
          
      lcd.setCursor(16,0);
      lcd.print("Save");


   }
    else 
   {  
     sta +=key;
     rrd +=key;
     dep +=key;
     str +=key;
     are +=key;
     lcd.print(key);
     }
   }
   
   if (key != NO_KEY&& key != 'A'&& key != 'B'){
    if(key == '#')
    {
     lcd.setCursor(7,2);
     sta="";
     lcd.print("         ");
     lcd.setCursor(7,2);
     rrd="";
     lcd.print("         ");
     lcd.setCursor(7,2);
     dep="";
     lcd.print("         ");
     lcd.setCursor(7,2);
     str="";
     lcd.print("         ");
     lcd.setCursor(7,2);
     are="";
     lcd.print("         ");
     key=0;
    }
   }
   if (key == 'C')
    {
     key == Sw;

     Sw--;
     key=0;
     count=0;
  
     lcd.clear();
   }
   
  if (key == 'D')
    {
     key == Sw;
     Sw++;
     sta="";
     rrd="";
     dep="";
     str="";
     are="";
     Station=0;
     River_depth=0;
     Depth=0;
     flo=0;
     Area=0;
     key=0;
     count=0;
     co=0;
    T1=0;
    ans=0;
     lcd.clear();
     
  }
      Gr = digitalRead(52);

  if (Gr == LOW)
  {
  
     lcd.setCursor(0,0);
     lcd.print("Save       ");
     delay(2000);
     key=0;
     count=0;
  //   writeSDTime();
    writeSDStation();
  }

     switch (Sw)
  {
    case 1: state = 1;
     break;
    case 2: state = 2;  
      break;
    case 3: state = 3;
      break;
    case 4: state = 4;
      break;
    case 5: state = 5;
      break;
     case 6: state = 6;
      break;
     case 7: state = 7;
      break;
     case 8: state = 8;
      break;
     case 9: state = 9;
      break;
     case 10: state = 10;
      break;
     case 11: state = 11;
      break;
     case 12: state = 12;
      break;
     case 13: state = 13;
      break; 
     case 14: state = 14;
      break; 
     case 15: state = 15;
      break; 
     case 16: state = 16;
      break; 
     case 17: state = 17;
      break; 
     case 18: state = 18;
      break; 
     case 19: state = 19;
      break; 
     case 20: state = 20;
       break; 
     case 21: state = 21;
      break;
     case 22: state = 22;
      break; 
     case 23: state = 23;
      break; 
     case 24: state = 24;
      break; 
     case 25: state = 25;
      break; 
     case 26: state = 26;
      break; 
     case 27: state = 27;
      break; 
     case 28: state = 28;
      break; 
     case 29: state = 29;
      break; 
     case 30: state = 30;
      break; 
     case 31: state = 31;
      break; 
     case 32: state = 32;
      break; 
     case 33: state = 33;
      break;  
     case 34: state = 34;
      break;
     case 35: state = 35;
      break;
     case 36: state = 36;
      break;
     case 37: state = 37;
      break;
     case 38: state = 38;
      break; 
     case 39: state = 39;
      break; 
     case 40: state = 40;
      break; 
     case 41: state = 41;
      break; 
     case 42: state = 42;
      break; 
     case 43: state = 43;
      break; 
     case 44: state = 44;
      break; 
     case 45: state = 45;
       break; 
     case 46: state = 46;
      break;
     case 47: state = 47;
      break; 
     case 48: state = 48;
      break; 
     case 49: state = 49;
      break; 
     case 50: state = 50;
      break; 
     case 51: state = 51;
      break; 
     case 52: state = 52;
      break; 
     case 53: state = 53;
      break; 
     case 54: state = 54;
      break; 
     case 55: state = 55;
      break; 
     case 56: state = 56;
      break; 
     case 57: state = 57;
      break; 
     case 58: state = 58;
      break;       
    case 59: state = 59;
     break;
    case 60: state = 60;  
      break;
    case 61: state = 61;
      break;
    case 62: state = 62;
      break;
    case 63: state = 63;
      break;
     case 64: state = 64;
      break;
     case 65: state = 65;
      break;
     case 66: state = 66;
      break;
     case 67: state = 67;
      break;
     case 68: state = 68;
      break;
     case 69: state = 69;
      break;
     case 70: state = 70;
      break;
     case 71: state = 71;
      break;
     case 72: state = 72;
      break; 
     case 73: state = 73;
      break; 
     case 74: state = 74;
      break; 
     case 75: state = 75;
      break;
     case 76: state = 76;
      break;  
     case 77: state = 77;
      break; 
     case 78: state = 78;
      break; 
     case 79: state = 79;
      break; 
     case 80: state = 80;
       break; 
     case 81: state = 81;
      break;
     case 82: state = 82;
      break; 
     case 83: state = 83;
      break; 
     case 84: state = 84;
      break; 
     case 85: state = 85;
      break; 
     case 86: state = 86;
      break; 
     case 87: state = 87;
      break; 
     case 88: state = 88;
      break; 
     case 89: state = 89;
      break; 
     case 90: state = 90;
      break; 
     case 91: state = 91;
      break; 
     case 92: state = 92;
      break; 
     case 93: state = 93;
      break;  
     case 94: state = 94;
      break;
     case 95: state = 95;
      break;
     case 96: state = 96;
      break;
     case 97: state = 97;
      break;
     case 98: state = 98;
      break; 
     case 99: state = 99;
      break; 
     case 100: state = 100;
      break; 
     case 101: state = 101;
      break; 
     case 102: state = 102;
      break; 
     case 103: state = 103;
      break; 
     case 104: state = 104;
      break; 
     case 105: state = 105;
       break; 
     case 106: state = 106;
      break;
     case 107: state = 107;
      break; 
     case 108: state = 108;
      break; 
     case 109: state = 109;
      break; 
     case 110: state = 110;
      break; 
     case 111: state = 111;
      break; 
     case 112: state = 112;
      break; 
     case 113: state = 113;
      break; 
     case 114: state = 114;
      break; 
     case 115: state = 115;
      break; 
     case 116: state = 116;
      break; 
     case 117: state = 117;
      break; 
     case 118: state = 118;
      break;      
     case 119: state = 119;
      break; 
     case 120: state = 120;
      break;
     case 121: state = 121;
      break; 
     case 122: state = 122;
      break; 
     case 123: state = 123;
      break; 
     case 124: state = 124;
      break; 
     case 125: state = 125;
      break; 
     case 126: state = 126;
      break; 
     case 127: state = 127;
      break; 
     case 128: state = 128;
      break;      
     case 129: state = 129;
      break; 
     case 130: state = 130;
      break;      
     case 131: state = 131;
      break; 
     case 132: state = 132;
      break; 
     case 133: state = 133;
      break; 
     case 134: state = 134;
      break; 
     case 135: state = 135;
      break; 
     case 136: state = 136;
      break; 
     case 137: state = 137;
      break; 
     case 138: state = 138;
      break;      
     case 139: state = 139;
      break; 
     case 140: state = 140;
      break;      
     case 141: state = 141;
      break; 
     case 142: state = 142;
      break; 
     case 143: state = 143;
      break; 
     case 144: state = 144;
      break; 
     case 145: state = 145;
      break; 
     case 146: state = 146;
      break; 
     case 147: state = 147;
      break; 
     case 148: state = 148;
      break;      
     case 149: state = 149;
      break; 
     case 150: state = 150;
      break;      
     case 151: state = 151;
      break; 
     case 152: state = 152;
      break; 
     case 153: state = 153;
      break; 
     case 154: state = 154;
      break; 
     case 155: state = 155;
      break; 
     case 156: state = 156;
      break; 
     case 157: state = 157;
      break; 
     case 158: state = 158;
      break;      
     case 159: state = 159;
      break; 
     case 160: state = 160;
      break;      
     case 161: state = 161;
      break; 
     case 162: state = 162;
      break; 
     case 163: state = 163;
      break; 
     case 164: state = 164;
      break; 
     case 165: state = 165;
      break; 
     case 166: state = 166;
      break; 
     case 167: state = 167;
      break; 
     case 168: state = 168;
      break;      
     case 169: state = 169;
      break; 
     case 170: state = 170;
      break;      
     case 171: state = 171;
      break; 
     case 172: state = 172;
      break; 
     case 173: state = 173;
      break; 
     case 174: state = 174;
      break; 
     case 175: state = 175;
      break; 
     case 176: state = 176;
      break; 
     case 177: state = 177;
      break; 
     case 178: state = 178;
      break;      
     case 179: state = 179;
      break; 
     case 180: state = 180;
      break;      
     case 181: state = 181;
      break; 
     case 182: state = 182;
      break; 
     case 183: state = 183;
      break; 
     case 184: state = 184;
      break; 
     case 185: state = 185;
      break; 
     case 186: state = 186;
      break; 
     case 187: state = 187;
      break; 
     case 188: state = 188;
      break;      
     case 189: state = 189;
      break; 
     case 190: state = 190;
      break;      
     case 191: state = 191;
      break; 
     case 192: state = 192;
      break; 
     case 193: state = 193;
      break; 
     case 194: state = 194;
      break; 
     case 195: state = 195;
      break; 
     case 196: state = 196;
      break; 
     case 197: state = 197;
      break; 
     case 198: state = 198;
      break;      
     case 199: state = 199;
      break; 
     case 200: state = 200;
      break;      
     case 201: state = 201;
      break; 
     case 202: state = 202;
      break; 
     case 203: state = 203;
      break; 
     case 204: state = 204;
      break; 
     case 205: state = 205;
      break; 
     case 206: state = 206;
      break; 
     case 207: state = 207;
      break; 
     case 208: state = 208;
      break;      
     case 209: state = 209;
      break; 
     case 210: state = 210;
      break;      
     case 211: state = 211;
      break; 
     case 212: state = 212;
      break; 
     case 213: state = 213;
      break; 
     case 214: state = 214;
      break; 
     case 215: state = 215;
      break; 
     case 216: state = 216;
      break; 
     case 217: state = 217;
      break; 
     case 218: state = 218;
      break;      
     case 219: state = 219;
      break; 
     case 220: state = 220;
      break;      
     case 221: state = 221;
      break; 
     case 222: state = 222;
      break; 
     case 223: state = 223;
      break; 
     case 224: state = 224;
      break; 
     case 225: state = 225;
      break; 
     case 226: state = 226;
      break; 
     case 227: state = 227;
      break; 
     case 228: state = 228;
      break;      
     case 229: state = 229;
      break; 
     case 230: state = 230;
      break;      
     case 231: state = 231;
      break; 
     case 232: state = 232;
      break; 
     case 233: state = 233;
      break; 
     case 234: state = 234;
      break; 
     case 235: state = 235;
      break; 
     case 236: state = 236;
      break; 
     case 237: state = 237;
      break; 
     case 238: state = 238;
      break;      
     case 239: state = 239;
      break; 
     case 240: state = 240;
      break;      
     case 241: state = 241;
      break; 
     case 242: state = 242;
      break; 
     case 243: state = 243;
      break; 
     case 244: state = 244;
      break; 
     case 245: state = 245;
      break; 
     case 246: state = 246;
      break; 
     case 247: state = 247;
      break; 
     case 248: state = 248;
      break;      
     case 249: state = 249;
      break; 
     case 250: state = 250;
      break;
     case 251: state = 251;
      break;      
     case 252: state = 252;
      break; 
     case 253: state = 253;
      break; 
     case 254: state = 254;
      break; 
     case 255: state = 255;
      break; 
     case 256: state = 256;
      break; 
     case 257: state = 257;
      break; 
     case 258: state = 258;
      break; 
     case 259: state = 259;
      break;      
     case 260: state = 260;
      break; 
     case 261: state = 261;
      break;
     case 262: state = 262;
      break;      
     case 263: state = 263;
      break; 
     case 264: state = 264;
      break; 
     case 265: state = 265;
      break; 
     case 266: state = 266;
      break; 
     case 267: state = 267;
      break; 
     case 268: state = 268;
      break; 
     case 269: state = 269;
      break; 
     case 270: state = 270;
      break;      
     case 271: state = 271;
      break; 
     case 272: state = 272;
      break;
     case 273: state = 273;
      break;      
     case 274: state = 274;
      break; 
     case 275: state = 275;
      break; 
     case 276: state = 276;
      break; 
     case 277: state = 277;
      break; 
     case 278: state = 278;
      break; 
     case 279: state = 279;
      break; 
     case 280: state = 280;
      break; 
     case 281: state = 281;
      break;      
     case 282: state = 282;
      break; 
     case 283: state = 283;
      break;
     case 284: state = 284;
      break;      
     case 285: state = 285;
      break; 
     case 286: state = 286;
      break; 
     case 287: state = 287;
      break; 
     case 288: state = 288;
      break;
     case 289: state = 289;
      break;       
     case 290: state = 290;
      break; 
     case 291: state = 291;
      break; 
     case 292: state = 292;
      break; 
     case 293: state = 293;
      break;      
     case 294: state = 294;
      break; 
     case 295: state = 295;
      break;
     case 296: state = 296;
      break;      
     case 297: state = 297;
      break; 
     case 298: state = 298;
      break; 
     case 299: state = 299;
      break; 
     case 300: state = 300;
      break; 
     case 301: state = 301;
      break; 
     case 302: state = 302;
      break; 
     case 303: state = 303;
      break; 
     case 304: state = 304;
      break;      
     case 305: state = 305;
      break; 
     case 306: state = 306;
      break;
     case 307: state = 307;
      break;
     case 308: state = 308;
      break;      
     case 309: state = 309;
      break; 
     case 310: state = 310;
      break; 
     case 311: state = 311;
      break; 
     case 312: state = 312;
      break; 
     case 313: state = 313;
      break; 
     case 314: state = 314;
      break; 
     case 315: state = 315;
      break; 
     case 316: state = 316;
      break;      
     case 317: state = 317;
      break; 
     case 318: state = 318;
      break;
     case 319: state = 319;
      break; 
     case 320: state = 320;
      break;       
       case 321: state = 321;
      break;
        case 322: state = 322;
      break; 
         case 323: state = 323;
      break;     
     case 9999: Sw = 0;
      break;      
  }
  
  if(state==1)
  {
     PROVINCE();
     
  }
   if(state==2)
 {
   
    
    D();
  }
  
  if(state==3)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn=Station;  
  }
    if(state==4)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd=River_depth; 
  }  
   if(state==5)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh=Depth;
     }  
  if(state==6)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh);
    lcd.setCursor(8,0);
    lcd.print(Sn);
    lcd.setCursor(7,2);
    lcd.print(str);
    co2=co;
    T2=T1;
    ans2=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==7)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn);   
   lcd.setCursor(8,1);
   lcd.print(Dh); 
   lcd.setCursor(6,2);
   lcd.print(ans2,4);
   lcd.setCursor(4,3);
   V =(ans2*(0.2594-0.0086)); 
   lcd.print(V,4);   
  }  
   if(state==8)//////0.6
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh2=Depth;   
    }
   if(state==9)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh2);
    lcd.setCursor(8,0);
    lcd.print(Sn);
    lcd.setCursor(7,2);
    lcd.print(str);
    co3=co;
    T3=T1;
    ans3=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==10)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn);   
   lcd.setCursor(8,1);
   lcd.print(Dh2); 
   lcd.setCursor(6,2);
   lcd.print(ans3,4);
   lcd.setCursor(4,3);
   V2 =(ans3*(0.2594-0.0086));
   lcd.print(V2,4);   
  }
   if(state==11)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);     
     lcd.print(dep);
      Dh3=Depth; 
    }  
   if(state==12)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh3);
    lcd.setCursor(8,0);
    lcd.print(Sn);
    lcd.setCursor(7,2);
    lcd.print(str);
    co4=co;
    T4=T1;
    ans4=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==13)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn);   
   lcd.setCursor(8,1);
   lcd.print(Dh3); 
   lcd.setCursor(6,2);
   lcd.print(ans4,4);
   lcd.setCursor(4,3);
   V3 =(ans4*(0.2594-0.0086));
   lcd.print(V3,4);   
  }
   if(state==14)////0.2
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh4=Depth; 
    }
     if(state==15)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh4);
    lcd.setCursor(8,0);
    lcd.print(Sn);
    lcd.setCursor(7,2);
    lcd.print(str);
    co5=co;
    T5=T1;
    ans5=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==16)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn);   
   lcd.setCursor(8,1);
   lcd.print(Dh4); 
   lcd.setCursor(6,2);
   lcd.print(ans5,4);
   lcd.setCursor(4,3);
   V4 =(ans5*(0.2594-0.0086));
   lcd.print(V4,4);
   
  }
     if(state==17)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn);
   
     
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa=Area;  
   }
   
     if(state==18)
   {
     
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q=(Aa*(V+V2+V3+V4)/2);
     lcd.setCursor(6,0);
     lcd.print(Q,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q2=(Q*60);
     lcd.print(Q2,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q3=(Q*3600);
     lcd.print(Q3,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd);
   }
   
     if(state==19)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn2=Station;  
  }
    if(state==20)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd2=River_depth; 
  }  
     if(state==21)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh5=Depth;
     }  
  if(state==22)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh5);
    lcd.setCursor(8,0);
    lcd.print(Sn2);
    lcd.setCursor(7,2);
    lcd.print(str);
    co6=co;
    T6=T1;
    ans6=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==23)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn2);   
   lcd.setCursor(8,1);
   lcd.print(Dh5); 
   lcd.setCursor(6,2);
   lcd.print(ans6,4);
   lcd.setCursor(4,3);
   V5 =(ans6*(0.2594-0.0086));
   lcd.print(V5,4);   
  }  
   if(state==24)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh6=Depth;   
    }
   if(state==25)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh6);
    lcd.setCursor(8,0);
    lcd.print(Sn2);
    lcd.setCursor(7,2);
    lcd.print(str);
    co7=co;
    T7=T1;
    ans7=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==26)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn2);   
   lcd.setCursor(8,1);
   lcd.print(Dh6); 
   lcd.setCursor(6,2);
   lcd.print(ans7,4);
   lcd.setCursor(4,3);
   V6 =(ans7*(0.2594-0.0086));
   lcd.print(V6,4);   
  }
   if(state==27)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh7=Depth; 
    }  
   if(state==28)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh7);
    lcd.setCursor(8,0);
    lcd.print(Sn2);
    lcd.setCursor(7,2);
    lcd.print(str);
    co8=co;
    T8=T1;
    ans8=ans;
         if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==29)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn2);   
   lcd.setCursor(8,1);
   lcd.print(Dh7); 
   lcd.setCursor(6,2);
   lcd.print(ans8,4);
   lcd.setCursor(4,3);
   V7 =(ans8*(0.2594-0.0086));
   lcd.print(V7,4);   
  }
   if(state==30)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh8=Depth; 
    }
    
   if(state==31)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh8);
    lcd.setCursor(8,0);
    lcd.print(Sn2);
    lcd.setCursor(7,2);
    lcd.print(str);
    co9=co;
    T9=T1;
    ans9=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==32)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn2);   
   lcd.setCursor(8,1);
   lcd.print(Dh8); 
   lcd.setCursor(6,2);
   lcd.print(ans9,4);
   lcd.setCursor(4,3);
   V8 =(ans9*(0.2594-0.0086));
   lcd.print(V8,4);
   
  }
     if(state==33)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn2);
   
     
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa2=Area;  
   }
   
     if(state==34)
   {
     
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q4=(Aa2*(V5+V6+V7+V8)/2);
     lcd.setCursor(6,0);
     lcd.print(Q4,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q5=(Q4*60);
     lcd.print(Q5,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q6=(Q4*3600);
     lcd.print(Q6,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd2);
   }

     if(state==35)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn3=Station;  
  }
    if(state==36)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd3=River_depth; 
  }  
     if(state==37)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh9=Depth;
     }  
  if(state==38)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh9);
    lcd.setCursor(8,0);
    lcd.print(Sn3);
    lcd.setCursor(7,2);
    lcd.print(str);
    co10=co;
    T10=T1;
    ans10=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==39)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn3);   
   lcd.setCursor(8,1);
   lcd.print(Dh9); 
   lcd.setCursor(6,2);
   lcd.print(ans10,4);
   lcd.setCursor(4,3);
   V9 =(ans10*(0.2594-0.0086));
   lcd.print(V9,4);   
  }  
   if(state==40)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh10=Depth;   
    }
   if(state==41)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh10);
    lcd.setCursor(8,0);
    lcd.print(Sn3);
    lcd.setCursor(7,2);
    lcd.print(str);
    co11=co;
    T11=T1;
    ans11=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==42)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn3);   
   lcd.setCursor(8,1);
   lcd.print(Dh10); 
   lcd.setCursor(6,2);
   lcd.print(ans11,4);
   lcd.setCursor(4,3);
   V10 =(ans11*(0.2594-0.0086));
   lcd.print(V10,4);   
  }
   if(state==43)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh11=Depth; 
    }  
   if(state==44)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh11);
    lcd.setCursor(8,0);
    lcd.print(Sn3);
    lcd.setCursor(7,2);
    lcd.print(str);
    co12=co;
    T12=T1;
    ans12=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==45)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn3);   
   lcd.setCursor(8,1);
   lcd.print(Dh11); 
   lcd.setCursor(6,2);
   lcd.print(ans12,4);
   lcd.setCursor(4,3);
   V11 =(ans12*(0.2594-0.0086));
   lcd.print(V11,4);   
  }
   if(state==46)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh12=Depth; 
    }
    
   if(state==47)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh12);
    lcd.setCursor(8,0);
    lcd.print(Sn3);
    lcd.setCursor(7,2);
    lcd.print(str);
    co13=co;
    T13=T1;
    ans13=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==48)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn3);   
   lcd.setCursor(8,1);
   lcd.print(Dh12); 
   lcd.setCursor(6,2);
   lcd.print(ans13,4);
   lcd.setCursor(4,3);
   V12 =(ans13*(0.2594-0.0086));
   lcd.print(V12,4);
   
  }
     if(state==49)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn3);
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa3=Area;  
   }
   
     if(state==50)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q7=(Aa3*(V9+V10+V11+V12)/2);
     lcd.setCursor(6,0);
     lcd.print(Q7,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q8=(Q7*60);
     lcd.print(Q8,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q9=(Q7*3600);
     lcd.print(Q6,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd3);
   }   
if(state==51)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn4=Station;  
  }
    if(state==52)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd4=River_depth; 
  }  
     if(state==53)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh13=Depth;
     }  
  if(state==54)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh13);
    lcd.setCursor(8,0);
    lcd.print(Sn4);
    lcd.setCursor(7,2);
    lcd.print(str);
    co14=co;
    T14=T1;
    ans14=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==55)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn4);   
   lcd.setCursor(8,1);
   lcd.print(Dh13); 
   lcd.setCursor(6,2);
   lcd.print(ans14,4);
   lcd.setCursor(4,3);
   V13 =(ans14*(0.2594-0.0086));
   lcd.print(V13,4);   
  }  
   if(state==56)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh14=Depth;   
    }
   if(state==57)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh14);
    lcd.setCursor(8,0);
    lcd.print(Sn4);
    lcd.setCursor(7,2);
    lcd.print(str);
    co15=co;
    T15=T1;
    ans15=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==58)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn4);   
   lcd.setCursor(8,1);
   lcd.print(Dh14,4); 
   lcd.setCursor(6,2);
   lcd.print(ans15,4);
   lcd.setCursor(4,3);
   V14 =(ans15*(0.2594-0.0086));
   lcd.print(V14,4);   
  }
   if(state==59)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh15=Depth; 
    }  
   if(state==60)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh15);
    lcd.setCursor(8,0);
    lcd.print(Sn4);
    lcd.setCursor(7,2);
    lcd.print(str);
    co16=co;
    T16=T1;
    ans16=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==61)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn4);   
   lcd.setCursor(8,1);
   lcd.print(Dh15); 
   lcd.setCursor(6,2);
   lcd.print(ans16,4);
   lcd.setCursor(4,3);
   V15 =(ans16*(0.2594-0.0086));
   lcd.print(V15,4);   
  }
   if(state==62)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh16=Depth; 
    }
    
   if(state==63)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh16);
    lcd.setCursor(8,0);
    lcd.print(Sn4);
    lcd.setCursor(7,2);
    lcd.print(str);
    co17=co;
    T17=T1;
    ans17=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==64)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn4);   
   lcd.setCursor(8,1);
   lcd.print(Dh16); 
   lcd.setCursor(6,2);
   lcd.print(ans17,4);
   lcd.setCursor(4,3);
   V16 =(ans17*(0.2594-0.0086));
   lcd.print(V16,4);
   
  }
     if(state==65)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn4);
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa4=Area;  
   }
   
     if(state==66)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q10=(Aa4*(V13+V14+V15+V16)/2);
     lcd.setCursor(6,0);
     lcd.print(Q10,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q11=(Q10*60);
     lcd.print(Q11,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q12=(Q10*3600);
     lcd.print(Q12,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd4);
   }     
if(state==67)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn5=Station;  
  }
    if(state==68)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd5=River_depth; 
  }  
     if(state==69)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh18=Depth;
     }  
  if(state==70)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh18);
    lcd.setCursor(8,0);
    lcd.print(Sn5);
    lcd.setCursor(7,2);
    lcd.print(str);
    co18=co;
    T18=T1;
    ans18=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==71)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn5);   
   lcd.setCursor(8,1);
   lcd.print(Dh18); 
   lcd.setCursor(6,2);
   lcd.print(ans18,4);
   lcd.setCursor(4,3);
   V18 =(ans18*(0.2594-0.0086));
   lcd.print(V18,4);   
  }  
   if(state==72)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh19=Depth;   
    }
   if(state==73)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh19);
    lcd.setCursor(8,0);
    lcd.print(Sn5);
    lcd.setCursor(7,2);
    lcd.print(str);
    co19=co;
    T19=T1;
    ans19=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==74)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn5);   
   lcd.setCursor(8,1);
   lcd.print(Dh19,4); 
   lcd.setCursor(6,2);
   lcd.print(ans19,4);
   lcd.setCursor(4,3);
   V19 =(ans19*(0.2594-0.0086));
   lcd.print(V19,4);   
  }
   if(state==75)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh20=Depth; 
    }  
   if(state==76)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh20);
    lcd.setCursor(8,0);
    lcd.print(Sn5);
    lcd.setCursor(7,2);
    lcd.print(str);
    co20=co;
    T20=T1;
    ans20=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==77)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn5);   
   lcd.setCursor(8,1);
   lcd.print(Dh20); 
   lcd.setCursor(6,2);
   lcd.print(ans20,4);
   lcd.setCursor(4,3);
   V20 =(ans20*(0.2594-0.0086));
   lcd.print(V20,4);   
  }
   if(state==78)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh21=Depth; 
    }
    
   if(state==79)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh21);
    lcd.setCursor(8,0);
    lcd.print(Sn5);
    lcd.setCursor(7,2);
    lcd.print(str);
    co21=co;
    T21=T1;
    ans21=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==80)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn5);   
   lcd.setCursor(8,1);
   lcd.print(Dh21); 
   lcd.setCursor(6,2);
   lcd.print(ans21,4);
   lcd.setCursor(4,3);
   V21 =(ans21*(0.2594-0.0086));
   lcd.print(V21,4);
   
  }
     if(state==81)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn5);
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa5=Area;  
   }
   
     if(state==82)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q13=(Aa5*(V18+V19+V20+V21)/2);
     lcd.setCursor(6,0);
     lcd.print(Q13,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q14=(Q13*60);
     lcd.print(Q14,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q15=(Q13*3600);
     lcd.print(Q15,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd5);
   }
if(state==83)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn6=Station;  
  }
    if(state==84)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd6=River_depth; 
  }  
     if(state==85)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh22=Depth;
     }  
  if(state==86)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh22);
    lcd.setCursor(8,0);
    lcd.print(Sn6);
    lcd.setCursor(7,2);
    lcd.print(str);
    co22=co;
    T22=T1;
    ans22=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==87)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn6);   
   lcd.setCursor(8,1);
   lcd.print(Dh22); 
   lcd.setCursor(6,2);
   lcd.print(ans22,4);
   lcd.setCursor(4,3);
   V22 =(ans22*(0.2594-0.0086));
   lcd.print(V22,4);   
  }  
   if(state==88)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh23=Depth;   
    }
   if(state==89)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh23);
    lcd.setCursor(8,0);
    lcd.print(Sn6);
    lcd.setCursor(7,2);
    lcd.print(str);
    co23=co;
    T23=T1;
    ans23=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==90)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn6);   
   lcd.setCursor(8,1);
   lcd.print(Dh23,4); 
   lcd.setCursor(6,2);
   lcd.print(ans23,4);
   lcd.setCursor(4,3);
   V23 =(ans23*(0.2594-0.0086));
   lcd.print(V23,4);   
  }
   if(state==91)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh24=Depth; 
    }  
   if(state==92)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh24);
    lcd.setCursor(8,0);
    lcd.print(Sn6);
    lcd.setCursor(7,2);
    lcd.print(str);
    co24=co;
    T24=T1;
    ans24=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==93)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn6);   
   lcd.setCursor(8,1);
   lcd.print(Dh24); 
   lcd.setCursor(6,2);
   lcd.print(ans24,4);
   lcd.setCursor(4,3);
   V24 =(ans24*(0.2594-0.0086));
   lcd.print(V24,4);   
  }
   if(state==94)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh25=Depth; 
    }
    
   if(state==95)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh25);
    lcd.setCursor(8,0);
    lcd.print(Sn6);
    lcd.setCursor(7,2);
    lcd.print(str);
    co25=co;
    T25=T1;
    ans25=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==96)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn6);   
   lcd.setCursor(8,1);
   lcd.print(Dh25); 
   lcd.setCursor(6,2);
   lcd.print(ans25,4);
   lcd.setCursor(4,3);
   V25 =(ans25*(0.2594-0.0086));
   lcd.print(V25,4);
   
  }
     if(state==97)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn6);
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa6=Area;  
   }
   
     if(state==98)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q16=(Aa6*(V22+V23+V24+V25)/2);
     lcd.setCursor(6,0);
     lcd.print(Q16,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q17=(Q16*60);
     lcd.print(Q17,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q18=(Q16*3600);
     lcd.print(Q18,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd6);
   }
     
     if(state==99)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn7=Station;  
  }
    if(state==100)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd7=River_depth; 
  }  
     if(state==101)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh26=Depth;
     }  
  if(state==102)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh26);
    lcd.setCursor(8,0);
    lcd.print(Sn7);
    lcd.setCursor(7,2);
    lcd.print(str);
    co26=co;
    T26=T1;
    ans26=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==103)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn7);   
   lcd.setCursor(8,1);
   lcd.print(Dh26); 
   lcd.setCursor(6,2);
   lcd.print(ans26,4);
   lcd.setCursor(4,3);
   V26 =(ans26*(0.2594-0.0086));
   lcd.print(V26,4);   
  }  
   if(state==104)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh27=Depth;   
    }
   if(state==105)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh27);
    lcd.setCursor(8,0);
    lcd.print(Sn7);
    lcd.setCursor(7,2);
    lcd.print(str);
    co27=co;
    T27=T1;
    ans27=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==106)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn7);   
   lcd.setCursor(8,1);
   lcd.print(Dh27,4); 
   lcd.setCursor(6,2);
   lcd.print(ans27,4);
   lcd.setCursor(4,3);
   V27 =(ans27*(0.2594-0.0086));
   lcd.print(V27,4);   
  }
   if(state==107)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh28=Depth; 
    }  
   if(state==108)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh28);
    lcd.setCursor(8,0);
    lcd.print(Sn7);
    lcd.setCursor(7,2);
    lcd.print(str);
    co28=co;
    T28=T1;
    ans28=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==109)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn7);   
   lcd.setCursor(8,1);
   lcd.print(Dh28); 
   lcd.setCursor(6,2);
   lcd.print(ans28,4);
   lcd.setCursor(4,3);
   V28 =(ans28*(0.2594-0.0086));
   lcd.print(V28,4);   
  }
   if(state==110)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh29=Depth; 
    }
    
   if(state==111)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh29);
    lcd.setCursor(8,0);
    lcd.print(Sn7);
    lcd.setCursor(7,2);
    lcd.print(str);
    co29=co;
    T29=T1;
    ans29=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==112)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn7);   
   lcd.setCursor(8,1);
   lcd.print(Dh29); 
   lcd.setCursor(6,2);
   lcd.print(ans29,4);
   lcd.setCursor(4,3);
   V29 =(ans29*(0.2594-0.0086));
   lcd.print(V29,4);
   
  }
     if(state==113)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn7);
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa7=Area;  
   }
   
     if(state==114)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q19=(Aa7*(V26+V27+V28+V29)/2);
     lcd.setCursor(6,0);
     lcd.print(Q19,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q20=(Q19*60);
     lcd.print(Q20,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q21=(Q19*3600);
     lcd.print(Q21,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd7);
   }   
       if(state==115)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn8=Station;  
  }
    if(state==116)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd8=River_depth; 
  }  
     if(state==117)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh30=Depth;
     }  
  if(state==118)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh30);
    lcd.setCursor(8,0);
    lcd.print(Sn8);
    lcd.setCursor(7,2);
    lcd.print(str);
    co30=co;
    T30=T1;
    ans30=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==119)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn8);   
   lcd.setCursor(8,1);
   lcd.print(Dh30); 
   lcd.setCursor(6,2);
   lcd.print(ans30,4);
   lcd.setCursor(4,3);
   V30 =(ans30*(0.2594-0.0086));
   lcd.print(V30,4);   
  }  
   if(state==120)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh31=Depth;   
    }
   if(state==121)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh31);
    lcd.setCursor(8,0);
    lcd.print(Sn8);
    lcd.setCursor(7,2);
    lcd.print(str);
    co31=co;
    T31=T1;
    ans31=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==122)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn8);   
   lcd.setCursor(8,1);
   lcd.print(Dh31,4); 
   lcd.setCursor(6,2);
   lcd.print(ans31,4);
   lcd.setCursor(4,3);
   V31 =(ans31*(0.2594-0.0086));
   lcd.print(V31,4);   
  }
   if(state==123)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh32=Depth; 
    }  
   if(state==124)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh32);
    lcd.setCursor(8,0);
    lcd.print(Sn8);
    lcd.setCursor(7,2);
    lcd.print(str);
    co32=co;
    T32=T1;
    ans32=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==125)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn8);   
   lcd.setCursor(8,1);
   lcd.print(Dh32); 
   lcd.setCursor(6,2);
   lcd.print(ans32,4);
   lcd.setCursor(4,3);
   V32 =(ans32*(0.2594-0.0086));
   lcd.print(V32,4);   
  }
   if(state==126)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh33=Depth; 
    }
    
   if(state==127)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh33);
    lcd.setCursor(8,0);
    lcd.print(Sn8);
    lcd.setCursor(7,2);
    lcd.print(str);
    co33=co;
    T33=T1;
    ans33=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==128)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn8);   
   lcd.setCursor(8,1);
   lcd.print(Dh33); 
   lcd.setCursor(6,2);
   lcd.print(ans33,4);
   lcd.setCursor(4,3);
   V33 =(ans33*(0.2594-0.0086));
   lcd.print(V33,4);
   
  }
     if(state==129)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn8);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa8=Area;  
   }
   
     if(state==130)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q22=(Aa8*(V30+V31+V32+V33)/2);
     lcd.setCursor(6,0);
     lcd.print(Q22,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q23=(Q22*60);
     lcd.print(Q23,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q24=(Q22*3600);
     lcd.print(Q24,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd8);
   } 
       if(state==131)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn9=Station;  
  }
    if(state==132)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd9=River_depth; 
  }  
     if(state==133)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh34=Depth;
     }  
  if(state==134)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh34);
    lcd.setCursor(8,0);
    lcd.print(Sn9);
    lcd.setCursor(7,2);
    lcd.print(str);
    co34=co;
    T34=T1;
    ans34=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==135)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn9);   
   lcd.setCursor(8,1);
   lcd.print(Dh34); 
   lcd.setCursor(6,2);
   lcd.print(ans34,4);
   lcd.setCursor(4,3);
   V34 =(ans34*(0.2594-0.0086));
   lcd.print(V34,4);   
  }  
   if(state==136)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh35=Depth;   
    }
   if(state==137)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh35);
    lcd.setCursor(8,0);
    lcd.print(Sn9);
    lcd.setCursor(7,2);
    lcd.print(str);
    co35=co;
    T35=T1;
    ans35=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==138)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn9);   
   lcd.setCursor(8,1);
   lcd.print(Dh35,4); 
   lcd.setCursor(6,2);
   lcd.print(ans35,4);
   lcd.setCursor(4,3);
   V35 =(ans35*(0.2594-0.0086));
   lcd.print(V35,4);   
  }
   if(state==139)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh36=Depth; 
    }  
   if(state==140)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh36);
    lcd.setCursor(8,0);
    lcd.print(Sn9);
    lcd.setCursor(7,2);
    lcd.print(str);
    co36=co;
    T36=T1;
    ans36=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==141)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn9);   
   lcd.setCursor(8,1);
   lcd.print(Dh36); 
   lcd.setCursor(6,2);
   lcd.print(ans36,4);
   lcd.setCursor(4,3);
   V36 =(ans36*(0.2594-0.0086));
   lcd.print(V36,4);   
  }
   if(state==142)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh37=Depth; 
    }
    
   if(state==143)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh37);
    lcd.setCursor(8,0);
    lcd.print(Sn9);
    lcd.setCursor(7,2);
    lcd.print(str);
    co37=co;
    T37=T1;
    ans37=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==144)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn9);   
   lcd.setCursor(8,1);
   lcd.print(Dh37); 
   lcd.setCursor(6,2);
   lcd.print(ans37,4);
   lcd.setCursor(4,3);
   V37 =(ans37*(0.2594-0.0086));
   lcd.print(V37,4);
   
  }
     if(state==145)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn9);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa9=Area;  
   }
   
     if(state==146)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q25=(Aa9*(V34+V35+V36+V37)/2);
     lcd.setCursor(6,0);
     lcd.print(Q25,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q26=(Q25*60);
     lcd.print(Q26,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q27=(Q25*3600);
     lcd.print(Q27,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd9);
   } 
      if(state==147)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn10=Station;  
  }
    if(state==148)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd10=River_depth; 
  }  
     if(state==149)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh38=Depth;
     }  
  if(state==150)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh38);
    lcd.setCursor(8,0);
    lcd.print(Sn10);
    lcd.setCursor(7,2);
    lcd.print(str);
    co38=co;
    T38=T1;
    ans38=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==151)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn10);   
   lcd.setCursor(8,1);
   lcd.print(Dh38); 
   lcd.setCursor(6,2);
   lcd.print(ans38,4);
   lcd.setCursor(4,3);
   V38 =(ans38*(0.2594-0.0086));
   lcd.print(V38,4);   
  }  
   if(state==152)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh39=Depth;   
    }
   if(state==153)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh39);
    lcd.setCursor(8,0);
    lcd.print(Sn10);
    lcd.setCursor(7,2);
    lcd.print(str);
    co39=co;
    T39=T1;
    ans39=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==154)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn10);   
   lcd.setCursor(8,1);
   lcd.print(Dh39,4); 
   lcd.setCursor(6,2);
   lcd.print(ans39,4);
   lcd.setCursor(4,3);
   V39 =(ans39*(0.2594-0.0086));
   lcd.print(V39,4);   
  }
   if(state==155)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh40=Depth; 
    }  
   if(state==156)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh40);
    lcd.setCursor(8,0);
    lcd.print(Sn10);
    lcd.setCursor(7,2);
    lcd.print(str);
    co40=co;
    T40=T1;
    ans40=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==157)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn10);   
   lcd.setCursor(8,1);
   lcd.print(Dh40); 
   lcd.setCursor(6,2);
   lcd.print(ans40,4);
   lcd.setCursor(4,3);
   V40 =(ans40*(0.2594-0.0086));
   lcd.print(V40,4);   
  }
   if(state==158)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh41=Depth; 
    }
    
   if(state==159)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh41);
    lcd.setCursor(8,0);
    lcd.print(Sn10);
    lcd.setCursor(7,2);
    lcd.print(str);
    co41=co;
    T41=T1;
    ans41=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==160)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn10);   
   lcd.setCursor(8,1);
   lcd.print(Dh41); 
   lcd.setCursor(6,2);
   lcd.print(ans41,4);
   lcd.setCursor(4,3);
   V41 =(ans41*(0.2594-0.0086));
   lcd.print(V41,4);
   
  }
     if(state==161)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn10);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa10=Area;  
   }
   
     if(state==162)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q28=(Aa10*(V38+V39+V40+V41)/2);
     lcd.setCursor(6,0);
     lcd.print(Q28,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q29=(Q28*60);
     lcd.print(Q29,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q30=(Q28*3600);
     lcd.print(Q30,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd10);
   }
      if(state==163)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn11=Station;  
  }
    if(state==164)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd11=River_depth; 
  }  
     if(state==165)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh42=Depth;
     }  
  if(state==166)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh42);
    lcd.setCursor(8,0);
    lcd.print(Sn11);
    lcd.setCursor(7,2);
    lcd.print(str);
    co42=co;
    T42=T1;
    ans42=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==167)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn11);   
   lcd.setCursor(8,1);
   lcd.print(Dh42); 
   lcd.setCursor(6,2);
   lcd.print(ans42,4);
   lcd.setCursor(4,3);
   V42 =(ans42*(0.2594-0.0086));
   lcd.print(V42,4);   
  }  
   if(state==168)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh43=Depth;   
    }
   if(state==169)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh43);
    lcd.setCursor(8,0);
    lcd.print(Sn11);
    lcd.setCursor(7,2);
    lcd.print(str);
    co43=co;
    T43=T1;
    ans43=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==170)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn11);   
   lcd.setCursor(8,1);
   lcd.print(Dh43,4); 
   lcd.setCursor(6,2);
   lcd.print(ans43,4);
   lcd.setCursor(4,3);
   V43 =(ans43*(0.2594-0.0086));
   lcd.print(V43,4);   
  }
   if(state==171)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh44=Depth; 
    }  
   if(state==172)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh44);
    lcd.setCursor(8,0);
    lcd.print(Sn11);
    lcd.setCursor(7,2);
    lcd.print(str);
    co44=co;
    T44=T1;
    ans44=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==173)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn11);   
   lcd.setCursor(8,1);
   lcd.print(Dh44); 
   lcd.setCursor(6,2);
   lcd.print(ans44,4);
   lcd.setCursor(4,3);
   V44 =(ans44*(0.2594-0.0086));
   lcd.print(V44,4);   
  }
   if(state==174)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh45=Depth; 
    }
    
   if(state==175)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh45);
    lcd.setCursor(8,0);
    lcd.print(Sn11);
    lcd.setCursor(7,2);
    lcd.print(str);
    co45=co;
    T45=T1;
    ans45=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==176)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn11);   
   lcd.setCursor(8,1);
   lcd.print(Dh45); 
   lcd.setCursor(6,2);
   lcd.print(ans45,4);
   lcd.setCursor(4,3);
   V45 =(ans45*(0.2594-0.0086));
   lcd.print(V45,4);
   
  }
     if(state==177)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn11);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa11=Area;  
   }
   
     if(state==178)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q31=(Aa11*(V42+V43+V44+V45)/2);
     lcd.setCursor(6,0);
     lcd.print(Q31,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q32=(Q31*60);
     lcd.print(Q32,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q33=(Q31*3600);
     lcd.print(Q33,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd11);
   }   
      if(state==179)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn12=Station;  
  }
    if(state==180)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd12=River_depth; 
  }  
     if(state==181)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh46=Depth;
     }  
  if(state==182)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh46);
    lcd.setCursor(8,0);
    lcd.print(Sn12);
    lcd.setCursor(7,2);
    lcd.print(str);
    co46=co;
    T46=T1;
    ans46=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==183)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn12);   
   lcd.setCursor(8,1);
   lcd.print(Dh46); 
   lcd.setCursor(6,2);
   lcd.print(ans46,4);
   lcd.setCursor(4,3);
   V46 =(ans46*(0.2594-0.0086));
   lcd.print(V46,4);   
  }  
   if(state==184)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh47=Depth;   
    }
   if(state==185)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh47);
    lcd.setCursor(8,0);
    lcd.print(Sn12);
    lcd.setCursor(7,2);
    lcd.print(str);
    co47=co;
    T47=T1;
    ans47=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==186)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn12);   
   lcd.setCursor(8,1);
   lcd.print(Dh47,4); 
   lcd.setCursor(6,2);
   lcd.print(ans47,4);
   lcd.setCursor(4,3);
   V47 =(ans47*(0.2594-0.0086));
   lcd.print(V47,4);   
  }
   if(state==187)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh48=Depth; 
    }  
   if(state==188)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh48);
    lcd.setCursor(8,0);
    lcd.print(Sn12);
    lcd.setCursor(7,2);
    lcd.print(str);
    co48=co;
    T48=T1;
    ans48=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==189)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn12);   
   lcd.setCursor(8,1);
   lcd.print(Dh48); 
   lcd.setCursor(6,2);
   lcd.print(ans48,4);
   lcd.setCursor(4,3);
   V48 =(ans48*(0.2594-0.0086));
   lcd.print(V48,4);   
  }
   if(state==190)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh49=Depth; 
    }
    
   if(state==191)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh49);
    lcd.setCursor(8,0);
    lcd.print(Sn12);
    lcd.setCursor(7,2);
    lcd.print(str);
    co49=co;
    T49=T1;
    ans49=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==192)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn12);   
   lcd.setCursor(8,1);
   lcd.print(Dh49); 
   lcd.setCursor(6,2);
   lcd.print(ans49,4);
   lcd.setCursor(4,3);
   V49 =(ans49*(0.2594-0.0086));
   lcd.print(V49,4);
   
  }
     if(state==193)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn12);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa12=Area;  
   }
   
     if(state==194)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q34=(Aa12*(V46+V47+V48+V49)/2);
     lcd.setCursor(6,0);
     lcd.print(Q34,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q35=(Q34*60);
     lcd.print(Q35,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q36=(Q34*3600);
     lcd.print(Q36,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd12);
   }   
     if(state==195)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn13=Station;  
  }
    if(state==196)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd13=River_depth; 
  }  
     if(state==197)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh50=Depth;
     }  
  if(state==198)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh50);
    lcd.setCursor(8,0);
    lcd.print(Sn13);
    lcd.setCursor(7,2);
    lcd.print(str);
    co50=co;
    T50=T1;
    ans50=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==199)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn13);   
   lcd.setCursor(8,1);
   lcd.print(Dh50); 
   lcd.setCursor(6,2);
   lcd.print(ans50,4);
   lcd.setCursor(4,3);
   V50 =(ans50*(0.2594-0.0086));
   lcd.print(V50,4);   
  }  
   if(state==200)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh51=Depth;   
    }
   if(state==201)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh51);
    lcd.setCursor(8,0);
    lcd.print(Sn13);
    lcd.setCursor(7,2);
    lcd.print(str);
    co51=co;
    T51=T1;
    ans51=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==202)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn13);   
   lcd.setCursor(8,1);
   lcd.print(Dh51,4); 
   lcd.setCursor(6,2);
   lcd.print(ans51,4);
   lcd.setCursor(4,3);
   V51 =(ans51*(0.2594-0.0086));
   lcd.print(V51,4);   
  }
   if(state==203)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh52=Depth; 
    }  
   if(state==204)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh52);
    lcd.setCursor(8,0);
    lcd.print(Sn13);
    lcd.setCursor(7,2);
    lcd.print(str);
    co52=co;
    T52=T1;
    ans52=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==205)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn13);   
   lcd.setCursor(8,1);
   lcd.print(Dh52); 
   lcd.setCursor(6,2);
   lcd.print(ans52,4);
   lcd.setCursor(4,3);
   V52 =(ans52*(0.2594-0.0086));
   lcd.print(V52,4);   
  }
   if(state==206)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh53=Depth; 
    }
    
   if(state==207)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh53);
    lcd.setCursor(8,0);
    lcd.print(Sn13);
    lcd.setCursor(7,2);
    lcd.print(str);
    co53=co;
    T53=T1;
    ans53=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==208)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn13);   
   lcd.setCursor(8,1);
   lcd.print(Dh53); 
   lcd.setCursor(6,2);
   lcd.print(ans53,4);
   lcd.setCursor(4,3);
   V53 =(ans53*(0.2594-0.0086));
   lcd.print(V53,4);
   
  }
     if(state==209)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn13);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa13=Area;  
   }
   
     if(state==210)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q37=(Aa13*(V50+V51+V52+V53)/2);
     lcd.setCursor(6,0);
     lcd.print(Q37,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q38=(Q37*60);
     lcd.print(Q38,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q39=(Q37*3600);
     lcd.print(Q39,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd13);
   }
     if(state==211)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn14=Station;  
  }
    if(state==212)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd14=River_depth; 
  }  
     if(state==213)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh54=Depth;
     }  
  if(state==214)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh54);
    lcd.setCursor(8,0);
    lcd.print(Sn14);
    lcd.setCursor(7,2);
    lcd.print(str);
    co54=co;
    T54=T1;
    ans54=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==215)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn14);   
   lcd.setCursor(8,1);
   lcd.print(Dh54); 
   lcd.setCursor(6,2);
   lcd.print(ans54,4);
   lcd.setCursor(4,3);
   V54 =(ans54*(0.2594-0.0086));
   lcd.print(V54,4);   
  }  
   if(state==216)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh55=Depth;   
    }
   if(state==217)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh55);
    lcd.setCursor(8,0);
    lcd.print(Sn14);
    lcd.setCursor(7,2);
    lcd.print(str);
    co55=co;
    T55=T1;
    ans55=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==218)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn14);   
   lcd.setCursor(8,1);
   lcd.print(Dh55,4); 
   lcd.setCursor(6,2);
   lcd.print(ans55,4);
   lcd.setCursor(4,3);
   V55 =(ans55*(0.2594-0.0086));
   lcd.print(V55,4);   
  }
   if(state==219)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh56=Depth; 
    }  
   if(state==220)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh56);
    lcd.setCursor(8,0);
    lcd.print(Sn14);
    lcd.setCursor(7,2);
    lcd.print(str);
    co56=co;
    T56=T1;
    ans56=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==221)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn14);   
   lcd.setCursor(8,1);
   lcd.print(Dh56); 
   lcd.setCursor(6,2);
   lcd.print(ans56,4);
   lcd.setCursor(4,3);
   V56 =(ans56*(0.2594-0.0086));
   lcd.print(V56,4);   
  }
   if(state==222)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh57=Depth; 
    }
    
   if(state==223)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh57);
    lcd.setCursor(8,0);
    lcd.print(Sn14);
    lcd.setCursor(7,2);
    lcd.print(str);
    co57=co;
    T57=T1;
    ans57=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==224)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn14);   
   lcd.setCursor(8,1);
   lcd.print(Dh57); 
   lcd.setCursor(6,2);
   lcd.print(ans57,4);
   lcd.setCursor(4,3);
   V57 =(ans57*(0.2594-0.0086));
   lcd.print(V57,4);
   
  }
     if(state==225)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn14);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa14=Area;  
   }
   
     if(state==226)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q40=(Aa14*(V54+V55+V56+V57)/2);
     lcd.setCursor(6,0);
     lcd.print(Q40,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q41=(Q40*60);
     lcd.print(Q41,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q42=(Q40*3600);
     lcd.print(Q42,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd14);
   } 
    if(state==227)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn15=Station;  
  }
    if(state==228)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd15=River_depth; 
  }  
     if(state==229)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh58=Depth;
     }  
  if(state==230)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh58);
    lcd.setCursor(8,0);
    lcd.print(Sn15);
    lcd.setCursor(7,2);
    lcd.print(str);
    co58=co;
    T58=T1;
    ans58=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==231)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn15);   
   lcd.setCursor(8,1);
   lcd.print(Dh58); 
   lcd.setCursor(6,2);
   lcd.print(ans58,4);
   lcd.setCursor(4,3);
   V58 =(ans58*(0.2594-0.0086));
   lcd.print(V58,4);   
  }  
   if(state==232)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh59=Depth;   
    }
   if(state==233)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh59);
    lcd.setCursor(8,0);
    lcd.print(Sn15);
    lcd.setCursor(7,2);
    lcd.print(str);
    co59=co;
    T59=T1;
    ans59=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==234)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn15);   
   lcd.setCursor(8,1);
   lcd.print(Dh59,4); 
   lcd.setCursor(6,2);
   lcd.print(ans59,4);
   lcd.setCursor(4,3);
   V59 =(ans59*(0.2594-0.0086));
   lcd.print(V59,4);   
  }
   if(state==235)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh60=Depth; 
    }  
   if(state==236)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh60);
    lcd.setCursor(8,0);
    lcd.print(Sn15);
    lcd.setCursor(7,2);
    lcd.print(str);
    co60=co;
    T60=T1;
    ans60=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==237)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn15);   
   lcd.setCursor(8,1);
   lcd.print(Dh60); 
   lcd.setCursor(6,2);
   lcd.print(ans60,4);
   lcd.setCursor(4,3);
   V60 =(ans60*(0.2594-0.0086));
   lcd.print(V60,4);   
  }
   if(state==238)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh61=Depth; 
    }
    
   if(state==239)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh61);
    lcd.setCursor(8,0);
    lcd.print(Sn15);
    lcd.setCursor(7,2);
    lcd.print(str);
    co61=co;
    T61=T1;
    ans61=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==240)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn15);   
   lcd.setCursor(8,1);
   lcd.print(Dh61); 
   lcd.setCursor(6,2);
   lcd.print(ans61,4);
   lcd.setCursor(4,3);
   V61 =(ans61*(0.2594-0.0086));
   lcd.print(V61,4);
   
  }
     if(state==241)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn15);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa15=Area;  
   }
   
     if(state==242)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q43=(Aa15*(V58+V59+V60+V61)/2);
     lcd.setCursor(6,0);
     lcd.print(Q43,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q44=(Q43*60);
     lcd.print(Q44,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q45=(Q43*3600);
     lcd.print(Q45,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd15);
   } 
    if(state==243)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn16=Station;  
  }
    if(state==244)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd16=River_depth; 
  }  
     if(state==245)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh62=Depth;
     }  
  if(state==246)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh62);
    lcd.setCursor(8,0);
    lcd.print(Sn16);
    lcd.setCursor(7,2);
    lcd.print(str);
    co62=co;
    T62=T1;
    ans62=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==247)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn16);   
   lcd.setCursor(8,1);
   lcd.print(Dh62); 
   lcd.setCursor(6,2);
   lcd.print(ans62,4);
   lcd.setCursor(4,3);
   V62 =(ans62*(0.2594-0.0086));
   lcd.print(V62,4);   
  }  
   if(state==248)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh63=Depth;   
    }
   if(state==249)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh63);
    lcd.setCursor(8,0);
    lcd.print(Sn16);
    lcd.setCursor(7,2);
    lcd.print(str);
    co63=co;
    T63=T1;
    ans63=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==250)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn16);   
   lcd.setCursor(8,1);
   lcd.print(Dh63,4); 
   lcd.setCursor(6,2);
   lcd.print(ans63,4);
   lcd.setCursor(4,3);
   V63 =(ans63*(0.2594-0.0086));
   lcd.print(V63,4);   
  }
   if(state==251)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh64=Depth; 
    }  
   if(state==252)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh64);
    lcd.setCursor(8,0);
    lcd.print(Sn16);
    lcd.setCursor(7,2);
    lcd.print(str);
    co64=co;
    T64=T1;
    ans64=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==253)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn16);   
   lcd.setCursor(8,1);
   lcd.print(Dh64); 
   lcd.setCursor(6,2);
   lcd.print(ans64,4);
   lcd.setCursor(4,3);
   V64 =(ans64*(0.2594-0.0086));
   lcd.print(V64,4);   
  }
   if(state==254)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh65=Depth; 
    }
    
   if(state==255)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh65);
    lcd.setCursor(8,0);
    lcd.print(Sn16);
    lcd.setCursor(7,2);
    lcd.print(str);
    co65=co;
    T65=T1;
    ans65=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==256)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn16);   
   lcd.setCursor(8,1);
   lcd.print(Dh65); 
   lcd.setCursor(6,2);
   lcd.print(ans65,4);
   lcd.setCursor(4,3);
   V65 =(ans65*(0.2594-0.0086));
   lcd.print(V65,4);
   
  }
     if(state==257)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn16);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa16=Area;  
   }
   
     if(state==258)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q46=(Aa16*(V62+V63+V64+V65)/2);
     lcd.setCursor(6,0);
     lcd.print(Q46,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q47=(Q46*60);
     lcd.print(Q47,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q48=(Q46*3600);
     lcd.print(Q48,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd16);
   }
     if(state==259)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn17=Station;  
  }
    if(state==260)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd17=River_depth; 
  }  
     if(state==261)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh66=Depth;
     }  
  if(state==262)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh66);
    lcd.setCursor(8,0);
    lcd.print(Sn17);
    lcd.setCursor(7,2);
    lcd.print(str);
    co66=co;
    T66=T1;
    ans66=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==263)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn17);   
   lcd.setCursor(8,1);
   lcd.print(Dh66); 
   lcd.setCursor(6,2);
   lcd.print(ans66,4);
   lcd.setCursor(4,3);
   V66 =(ans66*(0.2594-0.0086));
   lcd.print(V66,4);   
  }  
   if(state==264)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh67=Depth;   
    }
   if(state==265)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh67);
    lcd.setCursor(8,0);
    lcd.print(Sn17);
    lcd.setCursor(7,2);
    lcd.print(str);
    co67=co;
    T67=T1;
    ans67=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==266)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn17);   
   lcd.setCursor(8,1);
   lcd.print(Dh67,4); 
   lcd.setCursor(6,2);
   lcd.print(ans67,4);
   lcd.setCursor(4,3);
   V67 =(ans67*(0.2594-0.0086));
   lcd.print(V67,4);   
  }
   if(state==267)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh68=Depth; 
    }  
   if(state==268)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh68);
    lcd.setCursor(8,0);
    lcd.print(Sn17);
    lcd.setCursor(7,2);
    lcd.print(str);
    co68=co;
    T68=T1;
    ans68=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==269)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn17);   
   lcd.setCursor(8,1);
   lcd.print(Dh68); 
   lcd.setCursor(6,2);
   lcd.print(ans68,4);
   lcd.setCursor(4,3);
   V68 =(ans68*(0.2594-0.0086));
   lcd.print(V68,4);   
  }
   if(state==270)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh69=Depth; 
    }
    
   if(state==271)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh69);
    lcd.setCursor(8,0);
    lcd.print(Sn17);
    lcd.setCursor(7,2);
    lcd.print(str);
    co69=co;
    T69=T1;
    ans69=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==272)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn17);   
   lcd.setCursor(8,1);
   lcd.print(Dh69); 
   lcd.setCursor(6,2);
   lcd.print(ans69,4);
   lcd.setCursor(4,3);
   V69 =(ans69*(0.2594-0.0086));
   lcd.print(V69,4);
   
  }
     if(state==273)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn17);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa17=Area;  
   }
   
     if(state==274)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q49=(Aa17*(V66+V67+V68+V69)/2);
     lcd.setCursor(6,0);
     lcd.print(Q49,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q50=(Q49*60);
     lcd.print(Q50,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q51=(Q49*3600);
     lcd.print(Q51,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd17);
   }
     if(state==275)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn18=Station;  
  }
    if(state==276)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd18=River_depth; 
  }  
     if(state==277)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh70=Depth;
     }  
  if(state==278)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh70);
    lcd.setCursor(8,0);
    lcd.print(Sn18);
    lcd.setCursor(7,2);
    lcd.print(str);
    co70=co;
    T70=T1;
    ans70=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==279)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn18);   
   lcd.setCursor(8,1);
   lcd.print(Dh70); 
   lcd.setCursor(6,2);
   lcd.print(ans70,4);
   lcd.setCursor(4,3);
   V70 =(ans70*(0.2594-0.0086));
   lcd.print(V70,4);   
  }  
   if(state==280)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh71=Depth;   
    }
   if(state==281)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh71);
    lcd.setCursor(8,0);
    lcd.print(Sn18);
    lcd.setCursor(7,2);
    lcd.print(str);
    co71=co;
    T71=T1;
    ans71=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==282)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn18);   
   lcd.setCursor(8,1);
   lcd.print(Dh71,4); 
   lcd.setCursor(6,2);
   lcd.print(ans71,4);
   lcd.setCursor(4,3);
   V71 =(ans71*(0.2594-0.0086));
   lcd.print(V71,4);   
  }
   if(state==283)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh72=Depth; 
    }  
   if(state==284)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh72);
    lcd.setCursor(8,0);
    lcd.print(Sn18);
    lcd.setCursor(7,2);
    lcd.print(str);
    co72=co;
    T72=T1;
    ans72=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==285)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn18);   
   lcd.setCursor(8,1);
   lcd.print(Dh72); 
   lcd.setCursor(6,2);
   lcd.print(ans72,4);
   lcd.setCursor(4,3);
   V72 =(ans72*(0.2594-0.0086));
   lcd.print(V72,4);   
  }
   if(state==286)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh73=Depth; 
    }
    
   if(state==287)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh73);
    lcd.setCursor(8,0);
    lcd.print(Sn18);
    lcd.setCursor(7,2);
    lcd.print(str);
    co73=co;
    T73=T1;
    ans73=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==288)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn18);   
   lcd.setCursor(8,1);
   lcd.print(Dh73); 
   lcd.setCursor(6,2);
   lcd.print(ans73,4);
   lcd.setCursor(4,3);
   V73 =(ans73*(0.2594-0.0086));
   lcd.print(V73,4);
   
  }
     if(state==289)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn18);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa18=Area;  
   }
   
     if(state==290)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q52=(Aa18*(V70+V71+V72+V73)/2);
     lcd.setCursor(6,0);
     lcd.print(Q52,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q53=(Q52*60);
     lcd.print(Q53,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q54=(Q52*3600);
     lcd.print(Q54,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd18);
   }
     if(state==291)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn19=Station;  
  }
    if(state==292)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd19=River_depth; 
  }  
     if(state==293)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh74=Depth;
     }  
  if(state==294)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh74);
    lcd.setCursor(8,0);
    lcd.print(Sn19);
    lcd.setCursor(7,2);
    lcd.print(str);
    co74=co;
    T74=T1;
    ans74=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==295)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn19);   
   lcd.setCursor(8,1);
   lcd.print(Dh74); 
   lcd.setCursor(6,2);
   lcd.print(ans74,4);
   lcd.setCursor(4,3);
   V74 =(ans74*(0.2594-0.0086));
   lcd.print(V74,4);   
  }  
   if(state==296)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh75=Depth;   
    }
   if(state==297)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh75);
    lcd.setCursor(8,0);
    lcd.print(Sn19);
    lcd.setCursor(7,2);
    lcd.print(str);
    co75=co;
    T75=T1;
    ans75=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==298)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn19);   
   lcd.setCursor(8,1);
   lcd.print(Dh75,4); 
   lcd.setCursor(6,2);
   lcd.print(ans75,4);
   lcd.setCursor(4,3);
   V75 =(ans75*(0.2594-0.0086));
   lcd.print(V75,4);   
  }
   if(state==299)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh76=Depth; 
    }  
   if(state==300)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh76);
    lcd.setCursor(8,0);
    lcd.print(Sn19);
    lcd.setCursor(7,2);
    lcd.print(str);
    co76=co;
    T76=T1;
    ans76=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==301)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn19);   
   lcd.setCursor(8,1);
   lcd.print(Dh76); 
   lcd.setCursor(6,2);
   lcd.print(ans76,4);
   lcd.setCursor(4,3);
   V76 =(ans76*(0.2594-0.0086));
   lcd.print(V76,4);   
  }
   if(state==302)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh77=Depth; 
    }
    
   if(state==303)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh77);
    lcd.setCursor(8,0);
    lcd.print(Sn19);
    lcd.setCursor(7,2);
    lcd.print(str);
    co77=co;
    T77=T1;
    ans77=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==304)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn19);   
   lcd.setCursor(8,1);
   lcd.print(Dh77); 
   lcd.setCursor(6,2);
   lcd.print(ans77,4);
   lcd.setCursor(4,3);
   V77 =(ans77*(0.2594-0.0086));
   lcd.print(V77,4);
   
  }
     if(state==305)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn19);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa19=Area;  
   }
   
     if(state==306)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q55=(Aa19*(V74+V75+V76+V77)/2);
     lcd.setCursor(6,0);
     lcd.print(Q55,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q56=(Q55*60);
     lcd.print(Q56,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q57=(Q55*3600);
     lcd.print(Q57,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd19);
   } 
     if(state==307)///////////////////////////////////////////-------------------------------
  {    
  lcd.setCursor(5,0);
  lcd.print("Station");
  lcd.setCursor(0,2);
  lcd.print("Name:");
  lcd.setCursor(7,2);
  lcd.print(sta);
  Sn20=Station;  
  }
    if(state==308)
  {    
  lcd.setCursor(2,0);
  lcd.print("River depth");
  lcd.setCursor(0,2);
  lcd.print("Depth:");
  lcd.setCursor(7,2);
  lcd.print(rrd);
  Rd20=River_depth; 
  }  
     if(state==309)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh78=Depth;
     }  
  if(state==310)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh78);
    lcd.setCursor(8,0);
    lcd.print(Sn20);
    lcd.setCursor(7,2);
    lcd.print(str);
    co78=co;
    T78=T1;
    ans78=ans;
    if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
   }
  if(state==311)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn20);   
   lcd.setCursor(8,1);
   lcd.print(Dh78); 
   lcd.setCursor(6,2);
   lcd.print(ans78,4);
   lcd.setCursor(4,3);
   V78 =(ans78*(0.2594-0.0086));
   lcd.print(V78,4);   
  }  
   if(state==312)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh79=Depth;   
    }
   if(state==313)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh79);
    lcd.setCursor(8,0);
    lcd.print(Sn20);
    lcd.setCursor(7,2);
    lcd.print(str);
    co79=co;
    T79=T1;
    ans79=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==314)//////
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn20);   
   lcd.setCursor(8,1);
   lcd.print(Dh79,4); 
   lcd.setCursor(6,2);
   lcd.print(ans79,4);
   lcd.setCursor(4,3);
   V79 =(ans79*(0.2594-0.0086));
   lcd.print(V79,4);   
  }
   if(state==315)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
      Dh80=Depth; 
    }  
   if(state==316)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh80);
    lcd.setCursor(8,0);
    lcd.print(Sn20);
    lcd.setCursor(7,2);
    lcd.print(str);
    co80=co;
    T80=T1;
    ans80=ans;

    
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
    }
   if(state==317)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn20);   
   lcd.setCursor(8,1);
   lcd.print(Dh80); 
   lcd.setCursor(6,2);
   lcd.print(ans80,4);
   lcd.setCursor(4,3);
   V80 =(ans80*(0.2594-0.0086));
   lcd.print(V80,4);   
  }
   if(state==318)
    {
     lcd.setCursor(0, 0);
     lcd.print("Level of depth");
     lcd.setCursor(0,2);
     lcd.print("Level:");
     lcd.setCursor(7,2);
     lcd.print(dep);
     Dh81=Depth; 
    }
    
   if(state==319)
  {  
    setTime1=flo;
    buttonPin = digitalRead(51);
    Point();
    lcd.setCursor(0,0);
    lcd.print("Station");
    lcd.setCursor(0,1);
    lcd.print("count:");
    lcd.setCursor(0,2);
    lcd.print("Start:");
    lcd.setCursor(9,3);
    lcd.print("setTime:");
    lcd.setCursor(0,3);
    lcd.print("Time:");
    lcd.setCursor(12,0);
    lcd.print(Dh81);
    lcd.setCursor(8,0);
    lcd.print(Sn20);
    lcd.setCursor(7,2);
    lcd.print(str);
    co81=co;
    T81=T1;
    ans81=ans;
     if(key != NO_KEY )
    {
    if(key == 'B') 
        {
          count=0;
          start = 1;
          previousTime  = showTime;
          flo = str.toFloat();
          lcd.setCursor(0,3);
          lcd.print(flo,3);
         }
       }
  }
   if(state==320)
  {  
   lcd.setCursor(0,0);
   lcd.print("Staton =");
   lcd.setCursor(0,1);
   lcd.print("Depth =");
   lcd.setCursor(0,2);
   lcd.print("N/s =");
   lcd.setCursor(0,3);
   lcd.print("V =");
   lcd.setCursor(10,0);
   lcd.print(Sn20);   
   lcd.setCursor(8,1);
   lcd.print(Dh81); 
   lcd.setCursor(6,2);
   lcd.print(ans81,4);
   lcd.setCursor(4,3);
   V81 =(ans81*(0.2594-0.0086));
   lcd.print(V81,4);
   
  }
     if(state==321)
   {
     lcd.setCursor(0,0);
     lcd.print("Staton =");
     lcd.setCursor(10,0);
     lcd.print(Sn20);/////--------------------------
     lcd.setCursor(0,2);
     lcd.print("A =");
     lcd.setCursor(7,2);
     lcd.print(are);
     Aa20=Area;  
   }
   
     if(state==322)
   {
     lcd.setCursor(0,0);
     lcd.print("Q =");
     Q58=(Aa20*(V78+V79+V80+V81)/2);
     lcd.setCursor(6,0);
     lcd.print(Q58,4);
     lcd.setCursor(13,0);
     lcd.print("m^3/s");
     
     lcd.setCursor(3,1);
     Q59=(Q58*60);
     lcd.print(Q59,4);
     lcd.setCursor(13,1);
     lcd.print("m^3/min");
     
     lcd.setCursor(3,2);
     Q60=(Q58*3600);
     lcd.print(Q60,4);
     lcd.setCursor(13,2);
     lcd.print("m^3/hr");
     
     lcd.setCursor(0,3);
     lcd.print("River_depth =");
     lcd.setCursor(14,3);
     lcd.print(Rd20);
   }    
  ///-------------------------------------------------------------------------------------------------------------------------------------------------------------------------  
  if(start == 1) 
  {
  lcd.setCursor(9,3);
  lcd.print("setTime:");
  lcd.print(setTime1); //แสดงค่าเวลาที่ตั้งไว้
  T1 =(setTime1);
  lcd.setCursor(0,3);
  lcd.print("Time:");
  lcd.print((showTime - previousTime) / 1000); //แสดงผลการคำนวณว่าจับเวลาไปกี่วิแล้ว
  lcd.print("  ");
  lcd.setCursor(8,1);
  lcd.print(count);   
  co =(count);   

  if((showTime - previousTime) / 1000 >= setTime1) //ถ้าเวลาที่จับได้ มากกว่าหรือเท่ากับเวลาที่ตั้งไว้...
  {
  start = 0;
  buzzer = 1;
  lcd.setCursor(0,2);
  lcd.print("      ");
  //lcd.setCursor(0,2);
  //lcd.print("Finish");
  ans = (co/T1);  ///(5.00/2);
  
  lcd.setCursor(12,1);
  lcd.print(ans,4);
  lcd.print(" "); 

  }
 }
} 



