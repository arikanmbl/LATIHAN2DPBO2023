package DPBO.latihan2;

class Dosen extends SivitasAkademik{
    private String NIP;

    public Mahasiswa(String NIP){
        super(NIP);
        this.NIP = NIP;
    }

    public String getNIK(){
        return NIP;
    }

    public void setNIK(String NIK){
        this.NIP = NIP;
    }
}