package DPBO.latihan2;

class Mahasiswa extends SivitasAkademik{
    private String NIM;
    private String fakultas;
    private String prodi;

    public Mahasiswa(){
        this.NIM = "";
        this.fakultas = "";
        this.prodi = "";
    }

    public Mahasiswa(String NIM, String fakultas, String prodi){
        super(NIM, fakultas, prodi);
        this.NIM = NIM;
        this.fakultas = fakultas;
        this.prodi = prodi;
    }

    public String getNIK(){
        return NIK;
    }

    public void setNIK(String NIK){
        this.NIK = NIK;
    }

    public String getFakultas(){
        return fakultas;
    }

    public void setFakultas(String fakultas){
        this.fakultas = fakultas;
    }

    public String getProdi(){
        return prodi;
    }

    public void setProdi(String prodi){
        this.prodi = prodi;
    }
}