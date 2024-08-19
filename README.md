# Kontrol Warna LED RGB Menggunakan Arduino Uno

## Deskripsi Proyek
Proyek ini menggunakan Arduino Uno untuk mengendalikan LED RGB dan mengubah warnanya secara eksternal menggunakan potensiometer. Dengan memutar potensiometer, Anda dapat mengubah intensitas warna LED, menciptakan berbagai efek warna yang dinamis.

## Persyaratan

### Hardware
| Komponen         | Jumlah |
|------------------|--------|
| Arduino Uno      | 1      |
| LED RGB          | 1      |
| Resistor 220 ohm | 1      |
| Breadboard       | 1      |
| Potensiometer    | 1      |

### Software
- Arduino IDE

## Skematik Rangkaian

Berikut adalah skematik rangkaian untuk menghubungkan LED RGB dengan Arduino Uno dan potensiometer:

![Skematik Rangkaian](./3_Control%20RGB%20Color%20using%20Potentsio.pdf)

## Instalasi

### 1. Koneksi Hardware

1. **Hubungkan LED RGB ke Breadboard:**
   - LED RGB memiliki 4 kaki: salah satunya adalah kaki panjang yang umum (anoda) dan tiga kaki lainnya untuk warna merah, hijau, dan biru. Jika Anda memiliki LED RGB dengan kaki pendek (katoda), hubungkan kaki katoda ke ground (GND) Arduino.

2. **Hubungkan Kaki LED RGB ke Arduino:**
   - Hubungkan kaki merah LED RGB ke Pin 9 Arduino.
   - Hubungkan kaki hijau LED RGB ke Pin 10 Arduino.
   - Hubungkan kaki biru LED RGB ke Pin 11 Arduino.
   - Hubungkan kaki umum (anoda) ke pin 5V Arduino melalui resistor 220 ohm.

3. **Pasang Potensiometer di Breadboard:**
   - Hubungkan satu kaki potensiometer ke 5V Arduino.
   - Hubungkan kaki lainnya ke GND Arduino.
   - Hubungkan kaki tengah (wiper) potensiometer ke Pin A0 Arduino.

### 2. Pengaturan Software

1. **Unduh dan Instal Arduino IDE:**
   - Kunjungi [Arduino IDE Download](https://www.arduino.cc/en/software) untuk mengunduh dan menginstal Arduino IDE jika belum terpasang di komputer Anda.

2. **Tulis Kode Program:**
   - Salin dan tempel kode berikut ke dalam Arduino IDE:

    ```cpp
    // Mendefinisikan pin untuk LED
    const int redPin = 9;
    const int greenPin = 10;
    const int bluePin = 11;

    // Mendefinisikan pin untuk potensiometer
    const int potPin = A0;

    void setup() {
      // Mengatur pin LED sebagai output
      pinMode(redPin, OUTPUT);
      pinMode(greenPin, OUTPUT);
      pinMode(bluePin, OUTPUT);
    }

    void loop() {
      // Membaca nilai dari potensiometer
      int potValue = analogRead(potPin);

      // Menghitung nilai warna LED berdasarkan pembacaan potensiometer
      int redValue = map(potValue, 0, 1023, 0, 255);
      int greenValue = map(potValue, 0, 1023, 255, 0);
      int blueValue = map(potValue, 0, 1023, 127, 255);

      // Mengatur warna LED berdasarkan nilai yang dihitung
      analogWrite(redPin, redValue);
      analogWrite(greenPin, greenValue);
      analogWrite(bluePin, blueValue);

      // Menunggu sebentar sebelum pembacaan berikutnya
      delay(10);
    }
    ```

3. **Upload Program ke Arduino:**
   - Pilih tipe papan yang sesuai (Arduino Uno) dan port yang digunakan pada menu **Tools** di Arduino IDE.
   - Klik tombol **Upload** untuk mengunggah program ke Arduino.

## Penggunaan

1. **Periksa Koneksi:**
   - Pastikan semua kabel terhubung dengan benar dan tidak ada yang longgar.

2. **Putar Potensiometer:**
   - Setelah mengunggah program, putar potensiometer untuk melihat LED RGB berubah warna. Semakin Anda memutar potensiometer, warna LED akan berubah sesuai dengan nilai yang dibaca.

## Kontribusi

Jika Anda ingin berkontribusi pada proyek ini, silakan lakukan fork pada repository ini dan kirimkan pull request dengan perubahan Anda. Pastikan untuk mengikuti pedoman kontribusi yang berlaku dan melakukan tes terhadap kode sebelum mengajukan pull request.

## Lisensi

Proyek ini dilisensikan di bawah [MIT License](LICENSE). Lihat file LICENSE untuk detail lebih lanjut.

## Kontak

Untuk pertanyaan atau umpan balik, silakan hubungi Muhammad Mufid Ridho melalui email di [muhammadmufidridho77@gmail.com](mailto:muhammadmufidridho77@gmail.com).
