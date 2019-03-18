#include <dht11.h> // dht11 kütüphanesini ekliyoruz.
#define DHT11PIN 2 // DHT11PIN olarak Dijital 2"yi belirliyoruz.

dht11 DHT11;

void setup()
{
  Serial.begin(9600); // Seri iletişimi başlatıyoruz.
}

void loop()
{
  int chk = DHT11.read(DHT11PIN);

  // Sensörden gelen verileri Serial porta yazdırıyoruz.
  Serial.print("Nem: ");
  Serial.println((float)DHT11.humidity, 2);

  Serial.print("Sicaklik: ");
  Serial.println((float)DHT11.temperature, 2);
  // 1 saniye bekliyoruz. 2 saniyede bir veriler serial porta gönderilecek
  delay(1000);

}
