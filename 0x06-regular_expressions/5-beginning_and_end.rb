#!/usr/bin/env ruby
# matches /h_n/ with any single character in-between

puts ARGV[0].scan(/h.n/).join
