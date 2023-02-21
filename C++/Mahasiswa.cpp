#include <iostream>
#include <string>

using namespace std;

//subclass
class Mahasiswa : public SivitasAkademik {
   private:
    string NIM;
    string fakultas;
    string prodi;

   public:
    //constructor
    Mahasiswa(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email, string NIM, string fakultas, string prodi) : SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email) {
        this->NIM = NIM;
        this->fakultas = fakultas;
        this->prodi = prodi;
    }

    //constructor
    Mahasiswa() : SivitasAkademik() {
        this->NIM = "";
        this->fakultas = "";
        this->prodi = "";
    }

    //set NIM
    void setNIM(string NIM){
        this->NIM = NIM;
    }

    //get NIM
    string getNIM() {
        return NIM;
    }

    //set fakultas
    void setFakultas(string fakultas){
        this->fakultas = fakultas;
    }

    //get fakultas
    string getFakultas() {
        return fakultas;
    }

    //set prodi
    void setProdi(string prodi){
        this->prodi = prodi;
    }

    //get prodi
    string getProdi() {
        return prodi;
    }
};