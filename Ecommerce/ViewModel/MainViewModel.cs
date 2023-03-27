using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Collections.ObjectModel;
using Microsoft.EntityFrameworkCore;

using static Ecommerce.Model.EcommerceContext;
using Ecommerce.Model;
using System.ComponentModel;

namespace Ecommerce.ViewModel
{
    class MainViewModel : INotifyPropertyChanged
    {
        public ObservableCollection<Sneaker> Sneakers { get; set; } = new()
        {

        };
        public Photo Photo { get; set; } = new()
        {
            PhotoData = @"https://static.nike.com/a/images/t_PDP_1280_v1/f_auto,q_auto:eco/7d477a3d-bbff-446a-8ba8-7938ea779f22/air-force-1-low-retro-mens-shoes-1VHstQ.png"

        };


        public MainViewModel()
        {
            Task.Run(async () =>
            {


                using (var context = new EcommerceContext())
                {
                    // Создаем бренд и добавляем в контекст
                    var brand = new Brand { Name = "Nike" };
                    context.brands.Add(brand);
                   await context.SaveChangesAsync(); 
                    // Создаем кроссовки и добавляем в контекст
                    var sneaker = new Sneaker
                    {
                        Name = "Air Force",
                        BrandId = brand.Id, // указываем связанный бренд
                        Price = 120m
                    };
                    context.sneakers.Add(sneaker);

                    //Сохраняем изменения в базе данных
                  await  context.SaveChangesAsync();
                    var sneakersList = await context.sneakers.ToListAsync();
                    Sneakers = new ObservableCollection<Sneaker>(sneakersList);
                }
            });
        }

        public event PropertyChangedEventHandler? PropertyChanged;
    }
}
