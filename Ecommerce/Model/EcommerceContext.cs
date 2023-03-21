using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;



namespace Ecommerce.Model
{
    internal class EcommerceContext : DbContext
    {
        public DbSet<Brand> brands { get; set; }
        public DbSet<Sneaker> sneakers { get; set; }
        public DbSet<Photo> photos { get; set; }

        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            optionsBuilder.UseSqlServer("Data Source=(localdb)\\MSSQLLocalDB;Initial Catalog=EcommerceDataNew;Integrated Security=True;Connect Timeout=30;Encrypt=False;TrustServerCertificate=False;ApplicationIntent=ReadWrite;MultiSubnetFailover=False");
        }
        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
           modelBuilder.Entity<Sneaker>()
               
            .HasOne(s => s.Brand)
            .WithMany(b => b.Sneakers)
            .HasForeignKey(s => s.BrandId)
            .OnDelete(DeleteBehavior.Cascade );

            modelBuilder.Entity<Photo>()
                .HasOne(p => p.Sneakers)
                .WithMany(s => s.Photos)
                .HasForeignKey(p => p.SneakerId )
                .OnDelete(DeleteBehavior.Cascade );

            modelBuilder.Entity<Sneaker>()
               .Property(s => s.Price)
               .HasColumnType("decimal(18, 2)"); 
        }

        public class Brand
        {
            public int Id { get; set; }
            public string Name { get; set; }
            public virtual ICollection<Sneaker> Sneakers { get; set; }
        }

        public class Sneaker
        {
            public int Id { get; set; }
            public int BrandId { get; set; }
            public string Name { get; set; }
            public decimal Price { get; set; }
            public virtual Brand Brand { get; set; }
            public virtual ICollection<Photo> Photos { get; set; }
        }
        public class Photo
        {
            public int Id { get; set; }
            public int SneakerId { get; set; }
            public string PhotoData { get; set; }
            public virtual Sneaker Sneakers { get; set; }
        }
    }
}
