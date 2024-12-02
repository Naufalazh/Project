/ atur nomor pin
Konstan int pin sentuh = 4;
Konstan int ledPin = 16;

// ubah dengan nilai ambang batas Anda
Const int ambang batas = 20;
// variabel untuk menyimpan nilai pin sentuh
Int nilaisentuh;

Batalkan pengaturan(){
  Serial.mulai(115200);
  Delay(1000); //beri saya waktu untuk menjalankan serial monitor
  // inisialisasi pin LED sebagai output:
  pinMode(ledPin, OUTPUT);
}

Kekosongan loop(){
  //baca status nilai tombol tekan:
  Nilaisentuh = bacasentuh(pinsentuh);
  Serial.print(nilaisentuh);
  // periksa apakah touchValue berada di bawah ambang batas
  // jika ya, atur ledPin ke TINGGI
  Jika (nilaisentuh < ambang batas) {
    // nyalakan LED
    digitalWrite(ledPin, TINGGI);
    Serial.println(“ – LED menyala”);
  }
  Kalau tidak{
    // matikan LED
    digitalWrite(ledPin, RENDAH);
    Serial.println(“ – LED mati”);
  }
  Tunda(500);
}
