#superclass
class Human:
    #constructor
    def __init__(self, NIK="", nama="", jenis_kelamin="-"):
        self.NIK = NIK
        self.nama = nama
        self.jenis_kelamin = jenis_kelamin

    #set NIK
    def setNIK(self, NIK):
        self.NIK = NIK

    #get NIK
    def getNIK(self):
        return self.NIK

    #set nama
    def setNama(self, nama):
        self.nama = nama

    #get nama
    def getNama(self):
        return self.nama

    #set jenis kelamin
    def setJenisKelamin(self, jenis_kelamin):
        self.jenis_kelamin = jenis_kelamin

    #get jenis kelamin
    def getJenisKelamin(self):
        return self.jenis_kelamin

#subclass
class SivitasAkademik(Human):
    #constructor
    def __init__(self, NIK="", nama="", jenis_kelamin="-", asal_universitas="", email=""):
        super().__init__(NIK, nama, jenis_kelamin)
        self.asal_universitas = asal_universitas
        self.email = email

    #set asal universitas
    def setAsalUniversitas(self, asal_universitas):
        self.asal_universitas = asal_universitas

    #get asal universitas
    def getAsalUniversitas(self):
        return self.asal_universitas

    #set email
    def setEmail(self, email):
        self.email = email

    #get email
    def getEmail(self):
        return self.email

#subclass
class Mahasiswa(SivitasAkademik):
    #constructor
    def __init__(self, NIK="", nama="", jenis_kelamin="-", asal_universitas="", email="", NIM="", fakultas="", prodi=""):
        super().__init__(NIK, nama, jenis_kelamin, asal_universitas, email)
        self.NIM = NIM
        self.fakultas = fakultas
        self.prodi = prodi

    #set NIM
    def setNIM(self, NIM):
        self.NIM = NIM

    #get NIM
    def getNIM(self):
        return self.NIM

    #set fakultas
    def setFakultas(self, fakultas):
        self.fakultas = fakultas

    #get fakultas
    def getFakultas(self):
        return self.fakultas

    #set prodi
    def setProdi(self, prodi):
        self.prodi = prodi

    #get prodi
    def getProdi(self):
        return self.prodi

#membuat objek mahasiswa
mhs1 = Mahasiswa()

#set nilai mahasiswa
mhs1.setNIK("3603xxxxxxxxxxxx")
mhs1.setNama("Ayurika Sinambela")
mhs1.setJenisKelamin("P")
mhs1.setAsalUniversitas("Universitas Pendidikan Indonesia")
mhs1.setEmail("ayurika.s@upi.edu")
mhs1.setNIM("2003717")
mhs1.setFakultas("FPMIPA")
mhs1.setProdi("Ilmu Komputer")

#tampilkan data mahasiswa
print("Data Mahasiswa")
print("==============")
print("NIK\t\t:", mhs1.getNIK())
print("Nama\t\t:", mhs1.getNama())
print("Jenis Kelamin\t:", mhs1.getJenisKelamin())
print("Asal Universitas:", mhs1.getAsalUniversitas())
print("Email Edu\t:", mhs1.getEmail())
print("NIM\t\t:", mhs1.getNIM())
print("Fakultas\t:", mhs1.getFakultas())
print("Program Studi\t:", mhs1.getProdi())