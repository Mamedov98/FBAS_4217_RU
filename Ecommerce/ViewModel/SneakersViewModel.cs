using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections.ObjectModel;

using static Ecommerce.Model.EcommerceContext;
using Ecommerce.Model;

namespace Ecommerce.ViewModel
{
    class SneakersViewModel
    {
        public ObservableCollection<Sneaker> Sneakers { get; set; }
        public Photo Photo { get; set; } = new()
        {
            PhotoData = @"https://wallpapercave.com/wp/wp4312523.jpg"
        };


        public SneakersViewModel()
        {
            using (var context = new EcommerceContext())
            {
                // Создаем бренд и добавляем в контекст
                var brand = new Brand { Name = "Nike" };
                context.brands.Add(brand);
                context.SaveChanges();

                // Создаем кроссовки и добавляем в контекст
                var sneaker = new Sneaker
                {
                    Name = "Air Jordan",
                    BrandId = brand.Id, // указываем связанный бренд
                    Price = 150m
                };
               context.sneakers.Add(sneaker);

               //Сохраняем изменения в базе данных
                context.SaveChanges();
            }
        }
    }
}
