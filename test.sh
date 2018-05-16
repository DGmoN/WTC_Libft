for ff in tests/*.c; do
	make test FIND=${ff##*/}
done

for fn in unit/*; do
	$fn
done
