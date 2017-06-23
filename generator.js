
var matrixX = 13; //Matrix Width
var matrixY = 10; //Matrix Height
var npgContainer = jQuery("#npg-container");
var palleteContainer = jQuery("#npg-color-pallete");
var outputContainer = jQuery("#npg-output");
var lastColor = 207;
var lastColorAttr = '255, 255, 255';

jQuery(document).ready(function ($) {

	npgPrepare();
	document.oncontextmenu = function () {
		return false;
	};

	$("body").on("mousedown", ".npg-pixel", function (e) {
		e.preventDefault();
		var pixelId = $(this).attr('id');

		switch (e.which) {
			case 1:
				leftMouseClick(pixelId);
				break;
			case 2:
				//middleMouseClick(pixelId);
				break;
			case 3:
				rightMouseClick(pixelId);
				break;
			default:
				alert('You have a strange Mouse!');
		}
	});

	$("body").on("mousedown", ".color-pixel", function (e) {
		e.preventDefault();
		$(".color-pixel").removeClass("active");
		$(this).addClass("active");
		lastColorAttr = $(this).attr('data-rgb');
	});

	$("body").on("mousedown", "#generate-code", function (e) {
		e.preventDefault();
		generateCode();
	});

});

function npgPrepare() {
	
	jQuery(npgContainer).html('');
	var xhtml = '';

	for (ii = 0; ii < matrixY; ii++) {
		xhtml = '<div class="npg-row">';
		for (iii = 0; iii < matrixX; iii++) {
			xhtml += '<div class="npg-pixel" id="px__' + ii + '__' + iii + '"></div>';
		}
		xhtml += '</div>';
		jQuery(npgContainer).append(xhtml);
	}

	var colorCount = allColors.length;
	var colorColumns = colorCount / 10;
	var currentColor = 0;
	
	console.log(colorCount);
	console.log(colorColumns);
	console.log(currentColor);
	
	for (ii = 0; ii < colorColumns; ii++) {
		xhtml = '<div class="color-group">';
		for (iii = 0; iii < 10; iii++) {
			xhtml += '<div class="color-block">';
			xhtml += '<div id="cp__' + currentColor + '" class="color-pixel" style="background-color: ' + allColors[currentColor][0] + '" data-hex="' + allColors[currentColor][0] + '" data-rgb="' + allColors[currentColor][1] + '"></div>';
			xhtml += '</div>';
			currentColor++;
		}
		xhtml += '</div>';
		jQuery(palleteContainer).append(xhtml);
	}

	jQuery("#cp__" + lastColor).addClass("active");
}

function leftMouseClick(pixelId) {
	console.log(pixelId);
	jQuery('#' + pixelId).attr('data-rgb', lastColorAttr);
	jQuery('#' + pixelId).css('background-color', 'rgb(' + lastColorAttr + ')');
}

function rightMouseClick(pixelId) {
	console.log(pixelId);
	jQuery('#' + pixelId).removeAttr('data-rgb');
	jQuery('#' + pixelId).css('background-color', '');
}

function generateCode() {
	
	var xhtml = '';
	jQuery(outputContainer).html('');
	var pixelId = '';
	var pixelColor = '';
	var allPixels = [];
	ii = 0;

	xhtml += '<div>';
	xhtml += 'matrix.fillScreen(0);<br>';
	
	jQuery('.npg-pixel').each(function () {
		pixelId = jQuery(this).attr('id');
		pixelColor = jQuery(this).attr('data-rgb');

		if (pixelColor != null) {
			pixelId = pixelId.split('__');
			allPixels[ii] = [pixelId[1], pixelId[2], pixelColor];
			ii++;
		}

	});
	
	//matrix.drawPixel(x, y, Adafruit_NeoMatrix::Color)
	//matrix.drawPixel(0, 0, matrix.Color(color.r, color.g, color.b));
	
	for (iii = 0; iii < allPixels.length; iii++) {
		xhtml += 'matrix.drawPixel(' + allPixels[iii][1] + ', ' + allPixels[iii][0] + ', matrix.Color(' + allPixels[iii][2] + '));';
		xhtml += '<br>';
	}
	xhtml += 'matrix.show();';
	xhtml += '</div>';
	
	jQuery(outputContainer).html(xhtml);

}

//EOF