for filename in tests/**/*; do 
    [ -f "$filename" ] || continue
    mv "$filename" "${filename//_driver/}"

done