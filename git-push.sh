#!/usr/bin/bash

user=Bruno-Otavio
pass=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

for message in $@
do
	git add .
	git commit -m "$message"
	git push
	wget -0 ${xsel user}
	wget -0 ${xsel pass}
done