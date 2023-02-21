#include <iostream>
#include <string>

using namespace std;

//superclass
class Human {
   private:
    string NIK;
    string nama;
    char jenis_kelamin;

   public:
    //constructor
    Human(string NIK, string nama, char jenis_kelamin) {
        this->NIK = NIK;
        this->nama = nama;
        this->jenis_kelamin = jenis_kelamin;
    }

    //constructor
    Human() {
        this->NIK = "";
        this->nama = "";
        this->jenis_kelamin = '-';
    }

    //set NIK
    void setNIK(string NIK){
        this->NIK = NIK;
    }

    //get NIK
    string getNIK() {
        return NIK;
    }

    //set nama
    void setNama(string nama){
        this->nama = nama;
    }

    //get nama
    string getNama() {
        return nama;
    }

    //set jenis kelamin
    void setJenisKelamin(char jenis_kelamin){
        this->jenis_kelamin = jenis_kelamin;
    }

    //get jenis kelamin
    char getJenisKelamin() {
        return jenis_kelamin;
    }
};

//subclass
class SivitasAkademik : public Human {
   private:
    string asal_universitas;
    string email;

   public:
    SivitasAkademik(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email) : Human(NIK, nama, jenis_kelamin) {
        this->asal_universitas = asal_universitas;
        this->email = email;
    }

    SivitasAkademik() : Human() {
        this->asal_universitas = "";
        this->email = "";
    }

    void setAsalUniversitas(string asal_universitas){
        this->asal_universitas = asal_universitas;
    }

    string getAsalUniversitas() {
        return asal_universitas;
    }

    void setEmail(string email){
        this->email = email;
    }

    string getEmailEdu() {
        return email;
    }
};

//subclass
class Mahasiswa : public SivitasAkademik {
   private:
    string NIM;
    string fakultas;
    string prodi;

   public:
    Mahasiswa(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email, string NIM, string fakultas, string prodi) : SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email) {
        this->NIM = NIM;
        this->fakultas = fakultas;
        this->prodi = prodi;
    }

    Mahasiswa() : SivitasAkademik() {
        this->NIM = "";
        this->fakultas = "";
        this->prodi = "";
    }

    void setNIM(string NIM){
        this->NIM = NIM;
    }

    string getNIM() {
        return NIM;
    }

    void setFakultas(string fakultas){
        this->fakultas = fakultas;
    }

    string getFakultas() {
        return fakultas;
    }

    void setProdi(string prodi){
        this->prodi = prodi;
    }

    string getProdi() {
        return prodi;
    }
};

int main() {
    //membuat objek mahasiswa
    Mahasiswa mhs1;

    //set nilai mahasiswa
    mhs1.setNIK("3603xxxxxxxxxxxx");
    mhs1.setNama("Ayurika Sinambela");
    mhs1.setJenisKelamin('P');
    mhs1.setAsalUniversitas("Universitas Pendidikan Indonesia");
    mhs1.setEmail("ayurika.s@upi.edu");
    mhs1.setNIM("2003717");
    mhs1.setNIM("2003717");
    mhs1.setFakultas("FPMIPA");
    mhs1.setProdi("Ilmu Komputer");

    //tampilkan data mahasiswa
    cout << "Data Mahasiswa" << endl;
    cout << "==============" << endl;
    cout << "NIK\t\t: " << mhs1.getNIK() << endl;
    cout << "Nama\t\t: " << mhs1.getNama() << endl;
    cout << "Jenis Kelamin\t: " << mhs1.getJenisKelamin() << endl;
    cout << "Asal Universitas: " << mhs1.getAsalUniversitas() << endl;
    cout << "Email Edu\t: " << mhs1.getEmailEdu() << endl;
    cout << "NIM\t\t: " << mhs1.getNIM() << endl;
    cout << "Fakultas\t: " << mhs1.getFakultas() << endl;
    cout << "Program Studi\t: " << mhs1.getProdi() << endl;

    return 0;
}
