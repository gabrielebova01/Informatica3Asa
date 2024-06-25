#!/bin/bash

# Directory di input contenente i file C++
input_directory="./src"

# Directory di output per gli eseguibili
output_directory="./bin"

# Compilatore da utilizzare
compiler="g++"

# Controlla se la directory di input esiste
if [ ! -d "$input_directory" ]; then
    echo "La directory di input specificata non esiste: $input_directory"
    exit 1
fi

# Assicurati che la directory di output esista, altrimenti creala
if [ ! -d "$output_directory" ]; then
    mkdir -p "$output_directory"
fi

# Trova tutti i file .cpp nella directory di input
for file in "$input_directory"/*.cpp; do
    # Controlla se esistono file .cpp
    if [ ! -e "$file" ]; then
        echo "Nessun file C++ trovato nella directory: $input_directory"
        exit 1
    fi

    # Estrae il nome del file senza l'estensione
    base_name=$(basename "$file" .cpp)

    # Compila il file e crea un eseguibile con lo stesso nome nella directory di output
    $compiler "$file" -o "$output_directory/$base_name" # -Wall -Wextra

    # Controlla se la compilazione è avvenuta con successo
    if [ $? -eq 0 ]; then
        echo "Compilato con successo: $base_name"
    else
        echo "Errore nella compilazione di: $file"
    fi
done

