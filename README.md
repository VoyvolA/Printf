# Printf
⇒va list :argümanları tutan liste yapısı

⇒ int gönderdiğim yerde karakter aldığım zaman otomatik olarak tip dönüşümü yapıyoruz.,

⇒ ascii değeri gönderdiği için int alabilir.

⇒va_start’la başlatıyoruz argümanları içine alıyoruz args hangi listeme 

⇒va_start = strmden sonra gelen argümanları alır ... belirtilen yere.

⇒va_arg = argsmdeki argümanları sırasıyla getirir ayrıca hangi tipte olduğunu da belirtmemiz gerekir.

⇒argümanları va_list yapısında belirtmemizin sebebi sonsuz argüman listesi olduğu için yani girilen değerin uzunluğunu bilemiyoruz.

**KOD BRİFİNGİ**

[Buradan başlayalım](https://github.com/SsOguzHansS/printf/blob/main/ft_printf/ft_printf.c#:~:text=int%09ft_printf(const%20char%20*str%2C%20...)):

va_list yapısı ile argümanlar değişkenini tanımlıyoruz.

va_list ⇒Argümanları tutan bir liste yapısıdır. Girilen argümanlar belirsiz olduğu için bu yapıyı kullanıyoruz.

2 tane sayaç tanımlıyoruz ve ikisini de 0’a eşitliyoruz.

va_start ⇒ metodumuzda görüldüğü gibi main kısmındaki çift tırnaktan sonraki gelecek elemanları yani str’den sonraki gelecek elemanları argüman olarak alır.

str’min elemanı olduğu durumlarda eğer str’min indeksi eşit ise str’min içinde “%” işaretinden bir sonraki elemanı format olarak [alır.Ve](http://alır.Ve) virgüle kadar olan kısımda ilk argümanı alır.

ve ft_formats’a gönderir kullanıcı hangi tipte çıktı almak istiyorsa printf’teki yazdığı değere göre ft_formats içinde işleme devam edilir.
