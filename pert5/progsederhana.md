```mermaid
    flowchart TD;
    A(start) --> B[/char cKode/];
    B --> C[/print Kode Jurusan A/B/];
    C --> D[/terima inputan cKode/];
    D --> E{Case A};
    D --> F{Case a};
    E --true--> G[Print Teknik Informatika];
    F --true--> G[Print Teknik Informatika];
    E & F --false--> H{Case B atau Case b};
    E & F --false--> I{Case b};
    H --true--> J[Print Sistem Informasi];
    I --true--> J[Print Sistem Informasi];
    J --false--> L((default));
    I --false--> L((default));
    L --> M[Print Anda Salah Memasukan Kode];
    M & G & J --> N(finish);
   