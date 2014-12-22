
if [ -z $NEZ ]; then
	NEZ="nez.jar"
fi

java -jar $NEZ parse --memo:packrat --log:peg.csv -i input/empty -p p4d/ruby.p4d
