
namespace dataDosen{

class Dosen {
    //properties
    public int id  {get; set;}
    public string nama {get; set;}
    public int Nik  {get; set;}
    public string gender  {get; set;}
    public string course {get; set;}


//constructor
    public  Dosen(){
        nama = "Kamarudin, M.Kom";
        id = 11111;
        course ="Pemrograman";
    }


    public void addDosen() {
         nama = "Kamarudin, M.Kom";
         Nik = 211111;
    }

    public  void AddCourse(string course){
        course="Pemrograman";      
    }













}
}