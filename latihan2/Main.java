//base class
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

class SivitasAkademik extends Human{
    private String asal_universitas;
    private String email_edu;

    public SivitasAkademik extend Human(String asal_universitas, String email_edu){
        super(asal_universitas, email_edu);
        this.asal_universitas = asal_universitas;
        this.email_edu = email_edu;
    }

    public String getAsalUniversitas(){
        return asal_universitas;
    }

    public void setAsalUniversitas(String asal_universitas){
        this.asal_universitas = asal_universitas;
    }

    public String getEmailEdu(){
        return email_edu;
    }

    public void setEmailEdu(String email_edu){
        this.email_edu = email_edu;
    }
}

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

public class Main{
    public static void main(String[] args){
        Mahasiswa mhs1 = new Mahasiswa();
        
        mhs1.setNIK("3603xxxxxxxxxxxx");
        mhs1.setNama("Ayurika");
        mhs1.setJenisKelamin("Perempuan");

        System.out.println("NIK \t: ");
    }
}