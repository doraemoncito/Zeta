#!/usr/bin/ruby
# encoding: UTF-8
# Z Kit scripts - update-qt-creator-project.rb
#               __           __
#   _______ ___/ /______ ___/ /__
#  / __/ -_) _  / __/ _ \ _  / -_)
# /_/  \__/\_,_/\__/\___/_,_/\__/
# Copyright © 2006-2016 Manuel Sainz de Baranda y Goñi.
# Released under the terms of the GNU General Public License v3.

base_path = "#{File.expand_path(File.dirname(__FILE__))}/.."
project_file_path = "#{base_path}/development/Qt Creator/Z.pro"
pwd = Dir.pwd
File.delete project_file_path if File.exists? project_file_path
content = "H = ../../API/C/Z\nHPP = ../../API/C++/Z\n\nINCLUDEPATH += \\\n\t$$H \\\n\t$$HPP \\\n\nHEADERS += \\\n"
Dir.chdir "#{base_path}/API/C/Z"
Dir.glob("**/*.h").sort.each {|file| content << "\t\"$$H/#{file}\" \\\n"}
Dir.chdir "#{base_path}/API/C++/Z"
Dir.glob("**/*.hpp").sort.each {|file| content << "\t\"$$HPP/#{file}\" \\\n"}
Dir.chdir pwd
file = File.new(project_file_path, 'w+')
file.write content
file.close