#!/usr/bin/env ruby
# extracts sender, receiver and flag info from a log file using regular expression

puts ARGV[0].scan(/\[(?:from:|to:|flags:)(.*?)\]/).join(",")
