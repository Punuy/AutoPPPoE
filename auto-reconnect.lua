function wait(seconds)
    local start = os.time()
    repeat until os.time() > start + seconds
end

while true do
	os.execute("rasdial PPPoE Username Password")
	wait(45)
	os.execute("rasdial PPPoE /disconnect")
end
