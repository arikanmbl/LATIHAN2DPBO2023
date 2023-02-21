#include <iostream>
#include <string>

using namespace std;

//subclass
class SivitasAkademik : public Human {
   private:
    string asal_universitas;
    string email;

   public:
    //constructor
    SivitasAkademik(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email) : Human(NIK, nama, jenis_kelamin) {
        this->asal_universitas = asal_universitas;
        this->email = email;
    }

    //constructor
    SivitasAkademik() : Human() {
        this->asal_universitas = "";
        this->email = "";
    }

    //set asal universitas
    void setAsalUniversitas(string asal_universitas){
        this->asal_universitas = asal_universitas;
    }

    //get asal universitas
    string getAsalUniversitas() {
        return asal_universitas;
    }

    //set email
    void setEmail(string email){
        this->email = email;
    }

    //get email
    string getEmailEdu() {
        return email;
    }
};
