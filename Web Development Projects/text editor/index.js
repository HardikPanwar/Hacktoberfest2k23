 // Function to count the number of words in the text box.
 function view_count () {

  // Find html elements.
  var textArea = document.getElementById('my_text');
  var div = document.getElementById('view_count');
  // Put the text in a variable so we can manipulate it.
  var text = textArea.value;
//remove whitespace before and after end of text
text = text.replace(/(^\s*)|(\s*$)/gi,"");
// replace newline if it occurs at least once with single whitespace
text = text.replace(/\n{1,}/gi," ");
// replace whitespace if it occurs at least twice with single whitespace
text = text.replace(/\s{2,}/gi," ");

var words = text.split(" ");
var len = 0;
for (i = 0 ; i < words.length; i++)
{
if (words[i] != " " && words[i] != ""){
len += 1 ;

 }
}
if (text != undefined)
document.getElementById("view_count").innerHTML = "Words: " + len ;
if ( len >= 50000 ) {
document.getElementById ("marks").innerHTML = "You did it! You hit the 50000 words mark! Congratulations!";
}
else if ( len >= 40000 ) {
document.getElementById ("marks").innerHTML =  "You hit the 40000 words mark. Awesome!";
}
else if ( len >= 25000 ) {
document.getElementById ("marks").innerHTML =  "You hit the 25000 words mark. Nice work!";
}
else if ( len >= 10000 ) {
document.getElementById ("marks").innerHTML =  "You hit the 10000 words mark. Keep it up!";
}
else if ( len >= 5000 ) {
document.getElementById ("marks").innerHTML =  "You hit the 5000 words mark. Congrats!";
}
else if ( len >= 1667 ) {
document.getElementById ("marks").innerHTML =  "You hit the 1667 words mark. Great job for today!";
}
else
document.getElementById ("marks").innerHTML =  "";

// To keep updating the word count by calling the function repeatedly
setTimeout(view_count, 1000);

}
// View Count function ends.

// change theme function
function changecolor() {
font = document.getElementById("fontval").value;
bg = document.getElementById("bgval").value;
fontfamily = document.getElementById("fontfamily").value;
fontsize = document.getElementById("fontsize").value;
document.body.style.color = font ;
document.getElementById("my_text").style.color = font ;
document.body.style.background = bg ;
document.getElementById("my_text").style.background = bg ;
document.getElementById("my_text").style.font = ("normal " + fontsize + " " + fontfamily) ;

}