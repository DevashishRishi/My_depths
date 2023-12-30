import scrapy


class RookieSpider(scrapy.Spider):
    name = "rookie"
    allowed_domains = ["www.rubans.in"]
    start_urls = ["https://www.rubans.in/collections/rubans-luxury"]

    def parse(self, response):
        items = response.css('.grid-product__content')

        for item in items:
            yield {
                'name':  item.css('.grid-product__title.grid-product__title--body ::text').get(),
                'url': item.css('a').attrib['href']
            }

        next_page = response.css('span.page a ::attr(href)').get()

        if next_page is not None:
            next_page_url = 'https://www.rubans.in/'+next_page
            yield response.follow(next_page_url, callback= self.parse)
