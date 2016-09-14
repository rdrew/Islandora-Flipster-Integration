(function ($) {

	Drupal.behaviors.flipster_init = {

		attach: function (context, settings) {

			$('.collection_slideshow').flipster();
		}

	};


})(jQuery);
