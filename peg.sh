
if [ -z $NEZ ]; then
	NEZ="nez.jar"
fi

for file in p4d/* ; do
  java -jar $NEZ parse --memo:packrat --log:peg.csv -i input/empty -p $file
done

