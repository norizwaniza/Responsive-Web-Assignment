body {
  font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
  line-height: 1.5;
  color: #333;
  margin: 0;
}

/* Kriteria 21: Navbar di sebelah kiri untuk skrin besar */
#navbar {
  position: fixed;
  min-width: 290px;
  top: 0;
  left: 0;
  width: 300px;
  height: 100%;
  border-right: 2px solid #ddd;
  background-color: #f9f9f9;
}

#navbar header {
  color: black;
  margin: 10px;
  text-align: center;
  font-size: 1.8rem;
  font-weight: bold;
}

#navbar ul {
  height: 88%;
  padding: 0;
  overflow-y: auto;
  overflow-x: hidden;
}

#navbar li {
  list-style: none;
  border-top: 1px solid #ddd;
}

.nav-link {
  display: block;
  padding: 20px;
  color: #4d4e53;
  text-decoration: none;
  cursor: pointer;
}

.nav-link:hover {
  background-color: #eee;
}

/* Main Content Area */
#main-doc {
  margin-left: 310px;
  padding: 20px;
}

.main-section header {
  font-size: 1.5rem;
  font-weight: bold;
  margin-top: 20px;
}

code {
  display: block;
  background-color: #f7f7f7;
  padding: 15px;
  margin: 10px;
  border-radius: 5px;
  white-space: pre-line;
}

/* Kriteria 22: Penggunaan Media Query */
@media only screen and (max-width: 815px) {
  #navbar {
    width: 100%;
    position: relative;
    height: auto;
    border-right: none;
    border-bottom: 2px solid #ddd;
  }
  
  #main-doc {
    margin-left: 0;
  }
}
