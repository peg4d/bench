for i in 1 2 3 4 5 6 7 8 9 10 20 30 40 50 60 70 80 90 100 200 300 400 500 600 700 800 900 1000; do
     RATIO=`echo "scale=3; $i*0.0090090" | bc`
     ./xmgen -f ${RATIO} -d -o ${i}M.xml
     echo "[${i}M done]"
done
