package DPBO.latihan2;

class Human{
    private String NIK;
    private String nama;
    private String jenis_kelamin;

    public Human() {
        this.NIK = "";
        this.nama = "";
        this.jenis_kelamin = "";
    }

    public Human(String NIK, String nama, String jenis_kelamin) {
        this.NIK = NIK;
        this.nama = nama;
        this.jenis_kelamin = jenis_kelamin;
    }

    public String getNIK(){
        return NIK;
    }

    public void setNIK(String NIK){
        this.NIK = NIK;
    }

    public String getNama(){
        return nama;
    }

    public void setNama(String nama){
        this.nama = nama;
    }

    public String getJenisKelamin(){
        return jenis_kelamin;
    }

    public void setJenisKelamin(String jenis_kelamin){
        this.jenis_kelamin = jenis_kelamin;
    }
}