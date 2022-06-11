Sebuah gagasan yang terlintas di pikiran saya yaitu membuat layanan mandiri di sebuah coffee shop. Program ini menawarkan layanan yang tersedia dan menawarkan pilihan pesanan kepada user atau pelanggan yang menggunakan.. 
	Kelebihan dari penggunaan program ini adalah pelanggan akan lebih praktis dalam memesan tanpa perlu berinteraksi dengan barista. Namun justru karena itu kelebihan itu menjadi kekurangan dari program ini. Tidak seperti barista yang menggunakan skill sosialnya untuk mengetauhi selera pelanggan, program ini tidak mengerti arti rasa dari sebuah minuman dan hanya mengamati jumlah dan jenis minuman yang dipilih. 
Penjelasan Program: 
A.	Header “allfunc.h”
Header ini merupakan header yang menampung berbagai class dan fungsi yang digunakan dalam program ini. Adapun Class dan fungsi-fungsi yang digunakan antara lain : 
    1.	Struct buyer
    Struct ini berguna untuk menampung data pelanggan yaitu nama pelanggan, pilihan makanan pelanggan dan pilihan minuman pelanggan. 
    2.	Class order
    Class bernama order ini menampung segala bentuk proses program baik itu tipe data atau fungsi.
    Nama class memiliki member public antara lain struct dari buyer dengan nama object pembeli, kemudian diteruskan dengan deklarasi fungsi sebagai member dari class tersebut, perlu diketahui juga bahwa jika ingin mendefine sebuah fungsi pada member class dapat dilakukan di dalam class atau dilakukan seperti biasa dengan meletakkan nama class setelah tipe data fungsi dan menambah dua titik dua (::) kemudian diakhiri dengan sintaks fungsi. Fungsi nya antara lain :
    a.	Menu()
    Fungsi ini adalah terapan atau procedure untuk memaparkan menu pesanan yang tersedia pada sebuah coffee shop. Pada program ini juga menyediakan skip pesanan dengan memilih opsi ke 7. Dan terakhir program ini memiliki 2 metode pesanan yaitu pesanan tunggal atau pesan majemuk. 
    b.	SingleOrder()
    Fungsi ini bekerja jika pelanggan atau user memilih pesanan tunggal. Langkah pertama adalah menginput nama pelanggan yang akan dipanggil nanti. Kemudian meminta pilihan pesanan minuman yang pelanggan inginkan. Dan terakhir menginput pesanan makanan jika pelanggan ingin pesan. Jika tidak ingin pesan maka bisa menekan angka 7 untuk melompati permintaan input. Setelah seemua input dimasukkan data tersebut dimasukkan ke fungsi hitung() dengan parameter harga makanan dan harga minuman. 
    c.	MultiOrder()
    Sama seperti singleOrder(), fungsi ini juga bertujuan untuk menginput pesanan namun dengan jumlah yang banyak. Untuk menginput lebih dari satu data saya disini menggunakan for untuk mendapatkan pilihan harga  dari pseanan yang pelanggan pilih. Tidak seperti singleorder(), fungsi ini tidak memakai fungsi hitung().
    d.	Hitung()
    Function ini bertujuan untuk mengkalkulasi pembayarna yang harus dibayar oleh user atau pelanggan dengan parameter harga dari makanan dan minuman. Kemudian terakhir di jumlahkan dan ditambahkan dengan pajak 10%.
Setelah class, terdapat struct yang menampung data menu pesanan berupa array.
 Pertama-tama dideklarasikan jenis kumpulan data yang ada dalam sebuah array struct. Kemudian struct dipanggil dengan nama objek berunsur array, lalu membuat anggota dari tipe data yang tersimpan di struct secara berurut. Disini saya membuat 2 array untuk makanan dan minuman. Anggota struct juga hanya ada 2 yaitu nama produk makanan/ minuman dan harganya.
 B.	Program utama “main.cpp”
Program dimulai dengan mendeklarasi header cpp dan header “allfunc.h”. lalu dilanjutkan dengan pendeklarasian beberapa variabel antara lain input pesan tunggal atau majemuk, dan variabel pointer dan penampungnya. Kemudian saya juga mendeklarasikan class dengan nama obyek “pesan”. Awalnya saya ingin menggunakan constructor namun saat saya menggunakannya saya masih kurang mengerti karena di compiler saya mengalami error compiling. 
Selainjutnya adalah penampilan fungsi menu() dan diikuti dengan meminta input kepada user tentang pilihannya yang ingin memesan tunggal memesan banyak. Disini juga terdapat label “awal” untuk mengantisipasi gagal input. Pada program selanjutnya saya menampung input singmut pada pointer bernama “xptr”. 
Dengan dua opsi saya membuat percabangan menggunakan If. Pada if pertama saya membuat jika singmut diisi dengan angka 1 maka akan dilaksanakan fungsi singleorder() untuk membuat pesanan tunggal.
Namun jika inputnya salah dan menampung angka 2, maka akan dilaksanakan pula fungsi multiorder() untuk membuat pesanan yang banyak. 
Jika input tidak menampung ke dua angka atau pilihan tersebut, maka program akan mencetak “invalid input”, sistem akan pause dan jika user menekan enter maka program akan kembali ke label awal. Lalu program pun selesai. 
