package DPBO.latihan2;

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