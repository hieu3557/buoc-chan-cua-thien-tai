let menu = {
    "BAKHAN VILLAGE RESORT MAI CHÂU HÒA Binhf": {price: 20.000000, images: "https://ticotravel.com.vn/wp-content/uploads/2023/03/BAKHAN-VILLAGE-RESORT-MAI-CHAU-HOA-BINH.jpg"}, 
    "Xanh Villa Resort Spa": {price: 30.000000, images: "https://ticotravel.com.vn/wp-content/uploads/2023/03/XANH-VILLAS-RESORT-SPA.jpg"}, 
    "Glory Resort": {price: 35.000000, images: "https://ticotravel.com.vn/wp-content/uploads/2023/03/GLORY-RESORT-SON-TAY-HA-NOI.jpg"},
    "Serena Hoa Binh Resort ": {price: 50.000000, images: "https://ticotravel.com.vn/wp-content/uploads/2023/03/SERENA-HOA-BINH.jpg"}
  };
  
  function creathomeMenu() {
    let menuContainer = document.getElementById("resort");
    let menuList = document.createElement("div");
    menuList.className = "hang1";
    
    let imageClasses = ["image-class-1", "image-class-2", "image-class-3", "image-class-4"]; // Mảng chứa tên lớp tương ứng với từng ảnh
    let index = 0; // Biến chỉ số mảng
  
    for (let home in menu) {
      let price = menu[home].price.toFixed(6);
      let image = menu[home].images;
  
      let menuItem = document.createElement("div");
      menuItem.className = "hang2";
      let homeImage = document.createElement("img");
      let homeName = document.createElement("p");
      let homePrice = document.createElement("p");
  
      homeImage.src = image;
      homeImage.alt = home;
      homeImage.className = imageClasses[index]; // Đặt tên lớp riêng cho ảnh
  
      homeName.textContent = home;
      homePrice.textContent = price + "Vnd";
  
      menuItem.appendChild(homeImage);
      menuItem.appendChild(homeName);
      menuItem.appendChild(homePrice);
      menuList.appendChild(menuItem);
  
      index++; // Tăng chỉ số mảng để lấy tên lớp phù hợp cho ảnh tiếp theo
    }
  
    menuContainer.appendChild(menuList);
  }
  
  window.onload = creathomeMenu;