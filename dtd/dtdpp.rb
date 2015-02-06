# coding: utf-8
entities = {}
dtd = open(ARGV[0]){ |f| f.read }
dtd.gsub!(/<!ENTITY\s*%\s*([A-Za-z0-9_\-.]*)\s*"(.*?)"\s*>/m){ entities["%#{$1};"] = $2; "" }
loop do
	replace_count = 0
	entities.each{ |k, v|
		dtd.gsub!(k, v)
		replace_count += 1 if $&
	}
	break if replace_count == 0
end
puts dtd
