import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
@SpringBootApplication
public class PharmacyWebsiteApplication {

    public static void main(String[] args) {
        SpringApplication.run(PharmacyWebsiteApplication.class, args);
    }

    @GetMapping("/")
    public String home() {
        return "Welcome to the Pharmacy Website!";
    }

    @GetMapping("/products")
    public String products() {
        return "List of available products: medicines, vitamins, supplements, and more.";
    }

    @GetMapping("/about")
    public String about() {
        return "Our pharmacy is committed to providing high-quality healthcare services to our community.";
    }

    @GetMapping("/contact")
    public String contact() {
        return "For any inquiries, please contact us at pharmacy@example.com or call us at 123-456-7890.";
    }
}
