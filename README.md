# Struct Definitions

### 1. Foydalanuvchi Ma'lumotlarini Boshqarish (User Information Management)

shart: User nomli struct yarating. Ushbu struct bilan 3 ta o'zgaruvchi yarating hamda outputda berilgan jadval ko'rinishida chiqaring.

```c
User user01 = {"John", "Doe", 1990, "Tashkent", "+998901234567"};
User user02 = {"Jane", "Smith", 1985, "Samarkand", "+998901234568"};
User user02 = {"Ali", "Karimov", 2000, "Bukhara", "+998901234569"};
```

- **User** struct contains:
  - `first_name` (char[])
  - `last_name` (char[])
  - `birth_year` (int)
  - `location` (char[])
  - `phone` (char[])

**Example Output:**

```
Foydalanuvchilar Jadvali
First Name | Last Name | Birth Year | Location | Phone
------------------------------------------------------
John       | Doe       | 1990       | Tashkent | +998901234567
Jane       | Smith     | 1985       | Samarkand| +998901234568
Ali        | Karimov   | 2000       | Bukhara  | +998901234569
```

### 2. Telefon Ma'lumotlari (Phone Information)

shart: Phone nomli struct yarating. Ushbu struct bilan 10 ta Phone elementli array yarating hamda price $500 baland bolganlarini outputda berilgan jadval ko'rinishida chiqaring.

```c
Phone phones[10] = {
    {"Galaxy S20", "Samsung", 800, "8GB", "Black"},
    {"iPhone 12", "Apple", 1000, "6GB", "White"},
    {"Pixel 6", "Google", 600, "8GB", "Blue"},
    {"Redmi Note 10", "Xiaomi", 200, "4GB", "Gray"},
    {"OnePlus 9", "OnePlus", 700, "12GB", "Black"},
    {"Galaxy A51", "Samsung", 400, "6GB", "White"},
    {"iPhone SE", "Apple", 500, "3GB", "Red"},
    {"Moto G Power", "Motorola", 300, "4GB", "Blue"},
    {"Nokia 8.3", "Nokia", 650, "8GB", "Green"},
    {"Xperia 5 II", "Sony", 900, "8GB", "Black"}
};
```

- **Phone** struct contains:
  - `name` (char[])
  - `brand` (char[])
  - `price` (int)
  - `ram` (char[])
  - `color` (char[])

**Example Output:**

```
Narxi $500 dan yuqori telefonlar:
Name         | Brand    | Price | RAM | Color
------------------------------------------------
Galaxy S20   | Samsung  | 800   | 8GB | Black
iPhone 12    | Apple    | 1000  | 6GB | White
Pixel 6      | Google   | 600   | 8GB | Blue
```

### 3. Mashina Ma'lumotlari (Car Information)

shart: Car nomli srtuct yarating. Ushbu struct bilan 10 ta Car elementli array yarating hamda eng qimmat car ni outputda berilgan jadval ko'rinishida chiqaring.

```c
Car cars[10] = {
    {"Model S", "Tesla", 79999, 2022},
    {"Civic", "Honda", 24000, 2023},
    {"Camry", "Toyota", 27000, 2023},
    {"Mustang", "Ford", 55000, 2022},
    {"911", "Porsche", 120000, 2021},
    {"Aventador", "Lamborghini", 393695, 2023},
    {"Corolla", "Toyota", 20000, 2021},
    {"Phantom", "Rolls Royce", 450000, 2023},
    {"Altima", "Nissan", 25000, 2022},
    {"CX-5", "Mazda", 28000, 2023}
};
```

- **Car** struct contains:
  - `model` (char[])
  - `brand` (char[])
  - `price` (int)
  - `year` (int)

**Example Output:**

```
Eng qimmat mashina:
Model       | Brand   | Price | Year
-----------------------------------------
Rolls Royce | Phantom   | 450000 | 2023
```

### 4. Bozor Mahsulotlari Ma'lumotlari (Market Products Information)

shart: Grocery nomli struct yarating. Ushbu struct bilan 10 ta Grocery elementli array yarating hamda Dairy category li elementlarni output berilgan jadval ko'rinishida chiqaring.

```c
Grocery groceries[10] = {
    {"Milk", "Dairy", 2.5, 20},
    {"Cheese", "Dairy", 5.0, 10},
    {"Yogurt", "Dairy", 1.5, 50},
    {"Bread", "Bakery", 1.2, 100},
    {"Butter", "Dairy", 3.0, 15},
    {"Eggs", "Dairy", 2.0, 30},
    {"Apple", "Fruit", 1.5, 40},
    {"Orange Juice", "Beverage", 3.5, 25},
    {"Chicken", "Meat", 7.5, 10},
    {"Ice Cream", "Dairy", 4.5, 12}
};
```

- **Grocery** struct contains:
  - `name` (char[])
  - `category` (char[])
  - `price` (float)
  - `quantity` (int)

**Example Output:**

```
Sut mahsulotlari:
Name            | Category  | Price | Quantity
---------------------------------------------------
Milk            | Dairy     | 2.5   | 20
Cheese          | Dairy     | 5.0   | 10
Yogurt          | Dairy     | 1.5   | 50
Butter          | Dairy     | 1.5   | 50
Eggs            | Dairy     | 2.0   | 30
Ice Cream       | Dairy     | 4.5   | 12
```

### 5. Kredit Kartalari Ma'lumotlari (Credit Card Information)

shart: Card nomli struct yarating. Ushbu struct orqali 5 ta Card elementli array yarating hamda muddati tugamandan cardlarni outputda berilgan ko'rinishda chiqaring.

```c
Card cards[5] = {
    {"John Doe", "1234 5678 9012 3456", 2029, 123},
    {"Jane Smith", "2345 6789 0123 4567", 2029, 456},
    {"Ali Karimov", "3456 7890 1234 5678", 2025, 789},
    {"Sara Lee", "4567 8901 2345 6789", 2030, 234},
    {"Tom Brown", "5678 9012 3456 7890", 2023, 345}
};
```

- **Card** struct contains:
  - `card_holder_name` (char[])
  - `card_number` (char[])
  - `expiry_year` (int)
  - `cvv` (int)

**Example Output:**

```
Amal qilayotgan kartalar:
Card Holder Name | Card Number  | Expiry Year | CVV
---------------------------------------------------------
John Doe         | 1234 5678 9012 3456 | 2029       | 123
Jane Smith       | 2345 6789 0123 4567 | 2029       | 456
```

### 6. Muallif va Kitob Ma'lumotlari (Author and Book Information)

shart: Author, Book struct yarating. 3 ta author, 10 ta book yarating hamda XXI (21) asr da yozilgan kitoblar royxatini chiqaring.

```c
Author author01 = {"Alex Black", 1990};
Author author02 = {"Mary White", 1985};
Author author03 = {"John Green", 1975};

Book books[10] = {
    {"Book A", 25.0, 2021, author01},
    {"Book B", 30.0, 2023, author02},
    {"Book C", 15.0, 1997, author03},
    {"Book D", 20.0, 1880, author02},
    {"Book E", 35.0, 1994, author02},
    {"Book F", 40.0, 1995, author01},
    {"Book G", 10.0, 1790, author02},
    {"Book H", 50.0, 1890, author01},
    {"Book I", 45.0, 1990, author02},
    {"Book J", 60.0, 1890, author03}
};
```

- **Author** struct contains:
  - `name` (char[])
  - `birth_year` (int)

- **Book** struct contains:
  - `title` (char[])
  - `price` (float)
  - `published_year` (int)
  - `author` (nested Author struct)

**Example Output:**

```
XXI asr kitoblari:
Title           | Price | Published Year | Author Name | Author Birth Year
----------------------------------------------------------------------------
Book A          | 25    | 2021            | Alex Black  | 1990
Book B          | 30    | 2023            | Mary White  | 1985
```

### 7. Kompaniya va Mahsulot Boshqaruvi (Company and Product Management)

shart: Company, Product ctruct yarating. Faqat USA da ishlab chiqarilganlarini chiqaring.

- **Company** struct contains:
  - `name` (char[])
  - `location` (char[])

- **Product** struct contains:
  - `name` (char[])
  - `price` (float)
  - `quantity` (int)
  - `company` (nested Company struct)

**Example Output:**

```
AQShda ishlab chiqarilgan mahsulotlar:
Name         | Price | Quantity | Company Name | Company Location
-------------------------------------------------------------------
Product 1    | 50    | 100      | Company A    | USA
Product 2    | 30    | 200      | Company B    | USA
```

### 8. Janr bo'yicha Kino Kolleksiyasi (Movie Collection by Genre)

shart: Genre, Movie struct yarating. Faqat Action janrdagi kinolarni chiqaring.

- **Genre** struct contains:
  - `name` (char[])
  - `description` (char[])

- **Movie** struct contains:
  - `name` (char[])
  - `rating` (float)
  - `release_year` (int)
  - `genre` (nested Genre struct)

**Example Output:**

```
"Action" janridagi kinolar:
Name           | Rating | Release Year | Genre Name  | Genre Description
--------------------------------------------------------------------------
Movie A        | 8.5    | 2022         | Action      | Action-packed thriller
Movie B        | 9.0    | 2023         | Action      | High-octane adventure
```

### 9. Talaba Baholari va Fanlar (Student Grades and Subjects)

shart: Student, Subject, Score nomli struct yarating. O'rtacha balldan yuqorilarni chiqaring.

- **Student** struct contains:
  - `first_name` (char[])
  - `last_name` (char[])

- **Subject** struct contains:
  - `name` (char[])

- **Score** struct contains:
  - `score` (float)
  - `subject` (Subject)
  - `student` (Student)

**Example Output:**

```
O'rtacha bahodan yuqori ball to'plagan talabalar:
First Name | Last Name | Subject Name  | Score
------------------------------------------------
John       | Doe       | Math          | 85
Jane       | Smith     | Physics       | 90
```

### 10. Sport Jamoalari Boshqaruvi (Sports Teams Management)

shart: Stadium, Team struct yarating. Eng eski jamoa haqida malumotlarni chiqaring.

- **Stadium** struct contains:
  - `name` (char[])
  - `capacity` (int)

- **Team** struct contains:
  - `team_name` (char[])
  - `coach` (char[])
  - `players_count` (int)
  - `founded_year` (int)
  - `stadium` (nested Stadium struct)

**Example Output:**

```
Eng eski jamoa:
Team Name    | Coach       | Players Count | Founded Year | Stadium Name
----------------------------------------------------------------------
Team A       | Coach A     | 11            | 1950         | Stadium A
```
