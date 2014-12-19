
if [ -z $NEZ ] ; then
	NEZ="nez-0.9.jar"
fi

function mytest {
#java -jar $NEZ parse_stat $O -p NezBench/p4d/c99.p4d -i NezBench/input/c/nss_cache.c
java -jar $NEZ parse_stat $O --memo:packrat --memo:notrace -p NezBench/input/JavaScript.p4d -i NezBench/data/js/jquery-2.1.1.js
}

#mytest
#O="-O0" mytest
O="-O1" mytest
#O="-O2" mytest
O="-O3" mytest

