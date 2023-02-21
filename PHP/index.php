<?php
//superclass
class Human {
    private $NIK;
    private $nama;
    private $jenis_kelamin;

    //constructor
    public function __construct($NIK = "", $nama = "", $jenis_kelamin = '-') {
        $this->NIK = $NIK;
        $this->nama = $nama;
        $this->jenis_kelamin = $jenis_kelamin;
    }

    //set NIK
    public function setNIK($NIK) {
        $this->NIK = $NIK;
    }

    //get NIK
    public function getNIK() {
        return $this->NIK;
    }

    //set nama
    public function setNama($nama) {
        $this->nama = $nama;
    }

    //get nama
    public function getNama() {
        return $this->nama;
    }

    //set jenis kelamin
    public function setJenisKelamin($jenis_kelamin) {
        $this->jenis_kelamin = $jenis_kelamin;
    }

    //get jenis kelamin
    public function getJenisKelamin() {
        return $this->jenis_kelamin;
    }
}

//subclass
class SivitasAkademik extends Human {
    private $asal_universitas;
    private $email;

    //constructor
    public function __construct($NIK = "", $nama = "", $jenis_kelamin = "-", $asal_universitas = "", $email = "") {
        parent::__construct($NIK, $nama, $jenis_kelamin);
        $this->asal_universitas = $asal_universitas;
        $this->email = $email;
    }

    //set asal universitas
    public function setAsalUniversitas($asal_universitas) {
        $this->asal_universitas = $asal_universitas;
    }

    //get asal universitas
    public function getAsalUniversitas() {
        return $this->asal_universitas;
    }

    //set email
    public function setEmail($email) {
        $this->email = $email;
    }

    //get email
    public function getEmail() {
        return $this->email;
    }
}

//subclass
class Mahasiswa extends SivitasAkademik {
    private $NIM;
    private $fakultas;
    private $prodi;

    //constructor
    public function __construct($NIK = "", $nama = "", $jenis_kelamin = "-", $asal_universitas = "", $email = "", $NIM = "", $fakultas = "", $prodi = "") {
        parent::__construct($NIK, $nama, $jenis_kelamin, $asal_universitas, $email);
        $this->NIM = $NIM;
        $this->fakultas = $fakultas;
        $this->prodi = $prodi;
    }

    //set NIM
    public function setNIM($NIM) {
        $this->NIM = $NIM;
    }

    //get NIM
    public function getNIM() {
        return $this->NIM;
    }

    //set fakultas
    public function setFakultas($fakultas) {
        $this->fakultas = $fakultas;
    }

    //get fakultas
    public function getFakultas() {
        return $this->fakultas;
    }
    
    //set program studi
    public function setProdi($prodi) {
        $this->prodi = $prodi;
    }

    //get program studi
    public function getProdi() {
        return $this->prodi;
    }
}

//membuat objek Mahasiswa
$mhs1 = new Mahasiswa();

//set nilai Mahasiswa
$mhs1->setNIK("3603xxxxxxxxxxxx");
$mhs1->setNama("Ayurika Sinambela");
$mhs1->setJenisKelamin('P');
$mhs1->setAsalUniversitas("Universitas Pendidikan Indonesia");
$mhs1->setEmail("ayurika.s@upi.edu");
$mhs1->setNIM("2003717");
$mhs1->setFakultas("FPMIPA");
$mhs1->setProdi("Ilmu Komputer");

//tampilkan data Mahasiswa
echo "Data Mahasiswa" . "<br>";
echo "==============" . "<br>";
echo "NIK\t\t: " . $mhs1->getNIK() . "<br>";
echo "Nama\t\t: " . $mhs1->getNama() . "<br>";
echo "Jenis Kelamin\t: " . $mhs1->getJenisKelamin() . "<br>";
echo "Asal Universitas: " . $mhs1->getAsalUniversitas() . "<br>";
echo "Email Edu\t: " . $mhs1->getEmail() . "<br>";
echo "NIM\t\t: " . $mhs1->getNIM() . "<br>";
echo "Fakultas\t: " . $mhs1->getFakultas() . "<br>";
echo "Program Studi\t: " . $mhs1->getProdi() . "<br>";
