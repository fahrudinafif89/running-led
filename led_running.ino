// program ini dibuat oleh: mfahrudinafif89@gmail.com 
 

const int numLED = 10;  // Inisialisasi Jumlah LED =11 yaitu 3,4,5,6,7,8,9,10,11, 12 jadi 1 varibel
const int pinLED[numLED] = {3,4,5,6,7,8,9,10,11, 12}; 
 
void setup() 
{   
    // Inisialisasi semua pin LED sebagai OUTPUT   
    for(int i=0; i<10; i++)
    {pinMode(pinLED[i], OUTPUT);   
     } 
} 
 
void loop() 
{   
  // hidupkan led indeks 0 hingga 11 satu-persatu 
  for(int i=0; i<10; i++)
      {digitalWrite(pinLED[i], HIGH); 
       delay(100);  //delay berfungsi sebagai waktu penunda (1detik=1000)
       digitalWrite(pinLED[i], LOW);   
       }   
       
  // hidupkan led indeks 11 hingga 1 satu-persatu   
  for(int i=10; i>0; i--)
     {digitalWrite(pinLED[i], HIGH);     
      delay(100);     
      digitalWrite(pinLED[i], LOW);   
      } 
  } 
